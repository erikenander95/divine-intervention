#include <stdio.h>
#include "raylib/raylib.h"
#include <math.h>
#include <stdlib.h>

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080
#define TILE_SIZE 10

typedef enum{
    TILE_WATER = 0,
    TILE_LAND,
} TileType;

typedef struct {
    TileType type;
} Tile;

int main(){
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Divine Intervention");

    const int worldWidth = SCREEN_WIDTH / TILE_SIZE;
    const int worldHeight = SCREEN_HEIGHT / TILE_SIZE;
    
    Tile* world = malloc(worldWidth * worldHeight * sizeof(Tile));

    for (int y = 0; y < worldHeight; y++) {
        for (int x = 0; x < worldWidth; x++) {
            Tile* t = &world[x + y * worldWidth];
            if (rand() % 5 == 0)
                t->type = TILE_WATER;
            else
                t->type = TILE_LAND;
        }
    }

    while(!WindowShouldClose())
    {
        
        Vector2 mousePos = GetMousePosition();
        
        BeginDrawing();
        ClearBackground(BLACK);

        for (int y = 0; y < worldHeight; y++) {
            for (int x = 0; x < worldWidth; x++) {
                Tile* t = &world[x + y * worldWidth];
                Color color = t->type == TILE_WATER ? DARKBLUE : DARKGREEN;
                DrawRectangle(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE, color);
            }
        }

        DrawFPS(16, 16);
        
        DrawText(TextFormat("X: %.0f Y: %.0f", mousePos.x, mousePos.y), 600, 16, 20, WHITE);
        
        EndDrawing();
    }
    
    free(world);
    CloseWindow();
}