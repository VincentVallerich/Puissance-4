//*******************************************
//
// Projet de puissance 4 1A
//
//*******************************************

#include <stdio.h>
#include <stdlib.h>
#include "affichage.h"
#include "check.h"

int main()
{
    
char grid[row][col] = {{' ',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ','x',' '},
                        {' ',' ','o','x','o','x',' '},
                        {' ',' ','x','o','x','x',' '},
                        {' ','o','o','x','o','x',' '},
                        {' ','o','o','o','o','x','x'}};
    
    check(grid[row][col]);

    return 0;
}