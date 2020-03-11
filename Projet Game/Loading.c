#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Loading.h"
#include <windows.h>
void loading()
{
    for (int i = 0 ; i < 2 ; i++)
    {
        Sleep(500);
        system("cls");
        printf("            loading       (._.)");

        Sleep(500);
        system("cls");
        printf("            loading       ( l: )");

        Sleep(500);
        system("cls");
        printf("            loading       ( .-. )");

        Sleep(500);
        system("cls");
        printf("            loading       ( :l )");
    }
    system("cls");
}

