#include "affichage.h"

void displayGrid(char puissance[NBR_LINES][NBR_CELLS])
{
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<7; j++)
        {
            if (puissance[i][j] != ' ')
                printf("%c", puissance[i][j]);
            
            if (j%MODULO == 0 && j!=0)
                displayVLines();
        }
        printf("\n");
    }
    printf("1 2 3 4 5 6 7\n");
}

void displayVLines()
{
    printf("|");
}