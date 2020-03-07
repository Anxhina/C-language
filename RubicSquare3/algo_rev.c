#include "rubiks.h"
#include "algo.c"
#define PRINT_SQUARE_DEBUG_ 0





void algo_square_reverse(int **table, int square)
{
     
    int row;
    int col;
     int temp=table[0][1];
     int temp1= table[1][0];
     int temp2=table[0][0];
     int temp3 = table[1][1];
     table[1][1]=temp1;
     table[1][0]=temp2;
     table[0][1]=temp3;
   
            table[0][0]=temp;
             printf("Rotate Counter Clockwise square\n");
    
    print_tab(table);    

}

void algo_column_reverse(int **table,int col)
{
    
 

    int row = 0;
    int temp=table[row][col];

    for(row=3;row>0;row--)
    {
        table[row][col]=table[row-1][col];
    }
    table[row][col]=temp;
    printf("Rotate down column\n");
    print_tab(table);
}

void algo_line_reverse(int**table, int line)
{
    
     
    int col=0, row=line;
    int temp=table[row][col];

    for(col=3;col>0;col--)
    {
        table[row][col]=table[row][col-1];
    }
    table[row][col]=temp;
    printf("Rotate right line\n");
    print_tab(table);

}

