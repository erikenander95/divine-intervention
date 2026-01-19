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

    while(!WindowShouldClose())
    {
        ClearBackground(BLACK);
        BeginDrawing();

        DrawFPS(16, 16);
        EndDrawing();
    }
}