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

int main(void){
    InitWindow(screenWidth, screenHeight, "Snad");
    SetTargetFPS(60);
    puts(a_x);
//#################################Drawing#################################
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(C_Black);



        EndDrawing();
    }
        CloseWindow();
            return 0;
}
//#########################################################################
