#include "rubiks.h"

void print_tab(int **table)
{
    int row;
    int col;
    row=0;
    while(row < 4){
        col=0;
        printf("-----------------\n");
        while(col < 4){
        
            printf("| %d ", table [row][col]);
            col++;
        }
        printf("|\n");
        row++;
        }
        printf("-----------------\n");
        printf("\n");

    }



