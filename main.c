#include <stdio.h>
#include "raylib/raylib.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define STB_PERLIN_IMPLEMENTATION
#include "stb_perlin.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080
#define TILE_SIZE 10


typedef enum{
    TILE_WATER = 0,
    TILE_LAND,
    TILE_SAND,
    TILE_ICE,
    TILE_SNOW,
    TILE_MOUNTAIN,
} TileType;

typedef struct {
    TileType type;
} Tile;

int main(){
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Divine Intervention");

    const int worldWidth = SCREEN_WIDTH / TILE_SIZE;
    const int worldHeight = SCREEN_HEIGHT / TILE_SIZE;
    
    Tile* world = malloc(worldWidth * worldHeight * sizeof(Tile));

    srand(time(NULL));
    float offsetx = rand();
    float offsety = rand();

    for (int y = 0; y < worldHeight; y++) {
        for (int x = 0; x < worldWidth; x++) {

            float noiseValue = stb_perlin_ridge_noise3(x * 0.01f + offsetx, y * 0.01f + offsety, 0.0f, 2.0f, 0.5f, 1.0f, 6);
            

            //noiseValue = (noiseValue + 1.0f) / 2.0f;
            
            
            Tile* t = &world[x + y * worldWidth];
            if (noiseValue > 0.6f)
                t->type = TILE_LAND;
            else
                t->type = TILE_WATER;
        }
    }

    while(!WindowShouldClose())
    {
        
        BeginDrawing();
        ClearBackground(BLACK);

        for (int y = 0; y < worldHeight; y++) {
            for (int x = 0; x < worldWidth; x++) {
                Tile* t = &world[x + y * worldWidth];
                Color color = t->type == TILE_WATER ? DARKBLUE : DARKGREEN;
                DrawRectangle(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE, color);
            }
        }

        Vector2 mousePos = GetMousePosition();

        int tileX = mousePos.x / TILE_SIZE;
        int tileY = mousePos.y / TILE_SIZE;

        Tile* t = &world[tileX + tileY * worldWidth];

        const char* tileName;

        switch (t->type){
            case TILE_WATER:
                tileName = "Water";
                break;
            case TILE_LAND:
                tileName = "Land";
                break;
            case TILE_SAND:
                tileName = "Sand";
                break;
            case TILE_ICE:
                tileName = "Ice";
                break;
            case TILE_SNOW:
                tileName = "Snow";
                break;
            case TILE_MOUNTAIN:
                tileName = "Mountain";
                break;
        }

        DrawRectangle(tileX * TILE_SIZE, tileY * TILE_SIZE, 10, 10, (Color){0,0,0,50});

        DrawFPS(16, 16);
        
        DrawText(TextFormat("X: %.0f Y: %.0f", mousePos.x, mousePos.y), 600, 16, 20, WHITE);
        DrawText(TextFormat("Type of land: %s", tileName), 800, 16, 20, WHITE);
        
        EndDrawing();
    }
    
    free(world);
    CloseWindow();
}