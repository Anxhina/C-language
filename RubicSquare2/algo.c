#include "rubiks.h"
#define PRINT_SQUARE_DEBUG_ 0


void algo_line(int**table, int line)
{
     if(PRINT_SQUARE_DEBUG_ ==1)
         printf("Rotate left line %d. \n", line);
    int col=0, row=line;
    int temp=table[row][col];

    for(col=0;col<3;col++)
    {
        table[row][col]=table[row][col+1];
    }
    table[row][col]=temp;
  printf("Rotate left line\n");
    print_tab(table);

}
void algo_column(int **table,int col)
{
    
 if(PRINT_SQUARE_DEBUG_ ==1)
     printf("Rotate top column %d. \n", col);

    int row=0;
    int temp=table[row][col];

    for(row=0;row<3;row++)
    {
        table[row][col]=table[row+1][col];
    }
    table[row][col]=temp;
  printf("Rotate top column\n");
    print_tab(table);
}

void algo_square(int **table, int square)
{
     if(PRINT_SQUARE_DEBUG_ ==1)
        printf("Rotate Clockwise square %d. \n");
    int row;
    int col;
     int temp=table[0][0];
     int temp1= table[1][1];
     int temp2=table[1][0];
     int temp3 = table[0][1];
     table[1][0]=temp1;
     table[0][0]=temp2;
     table[1][1]=temp3;
   
            table[0][1]=temp;
    printf("Rotate Clockwise square\n");
    
    print_tab(table);    

}






















