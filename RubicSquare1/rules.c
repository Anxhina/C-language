#include "rubiks.h"
int **create_table(){
    int **tab;
    int row_counter;
    tab =malloc(sizeof(int *) * 4);
    row_counter= 0;
    while(row_counter < 4){
        tab[row_counter]= malloc(sizeof(int) * 4);
        row_counter++;
    }
    return tab;
}

void fill_table(int **table)
{
    int row;
    int col;
    row=0;
    while(row < 4){
        col=0;
        while(col < 4){
            if(row < 2 && col < 2){
                table [row][col]= 0;
            }
            if (row < 2 && col >= 2){
                table [row] [col]=1;
            }
            if (row >= 2 && col < 2){
                table [row][col]= 2;
            }
            if (row >= 2 && col >=2){
                table [row][col]=3;
            }
            col++;
        }
        row++;
    }
}

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



