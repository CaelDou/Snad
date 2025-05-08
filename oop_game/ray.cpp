#include "include/raylib.h"
#include <iostream>
#include<stdlib.h>
#include <stdio.h>
#include "var.h"
using namespace std;
//#################################Variables#################################

const int screenWidth = 800;
const int screenHeight = 450;

Color C_Red = {195, 62, 62, 255};
Color C_Blue = {93, 114, 186, 255};
Color C_Green = {51, 106, 95, 255};
Color C_White = {233, 236, 240, 255};
Color C_Black = {28, 31, 44, 255};
int Tsize = 30;

//#################################Main#################################
int main(void){
    InitWindow(screenWidth, screenHeight, "Snad");
    SetTargetFPS(60);



//#################################Drawing#################################
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(C_Black);
        for (int y = 0; y < a_x; y++){
            for (int x = 0; x < a_x; x++){
                if (arr[y][x] == 11){
                    DrawRectangle(x * Tsize, y * Tsize, Tsize, Tsize, C_Red);
                }
                else if (arr[y][x] == 22){
                    DrawRectangle(x * Tsize, y * Tsize, Tsize, Tsize, C_Green);
                }
            }

        }

        EndDrawing();
    }
        CloseWindow();
            return 0;
}
//#########################################################################














