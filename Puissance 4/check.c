#include "check.h"

void win(char winner)
{
    int winner_nbr = 0;

    if (winner == 'x')
        winner_nbr = 1;

    printf("Le joueur %d a gagne", winner_nbr);
}

void checkFour(char a, char b, char c, char d)
{
    int winner;
    if (a == b && b == c && c == d && a != ' ')
        win(a);
}

void checkVertical(char grid[row][col], int rowPosition, int colPosition)
{
    char buffer[4];

    for (int i=0; i < 4; i++)
        buffer[i] = grid[rowPosition + i][colPosition];

    checkFour(buffer[0], buffer[1], buffer[2], buffer[3]);
}

void checkHorizontal(char grid[row][col], int rowPosition, int colPosition)
{
    char buffer[4];

    for (int i=0;i<3;i++)
        buffer[i] = grid[rowPosition][colPosition + i];

    checkFour(buffer[0], buffer[1], buffer[2], buffer[3]);
}

void checkDiagonal(char grid[row][col], int rowPosition, int colPosition)
{
	char temp = grid[rowPosition][colPosition];
    for (int i=0;i<=3;i++)
    {
        if (grid[rowPosition-(i-3)][colPosition-(i-3)] == temp && grid[rowPosition-(i-1)][colPosition-(i-1)] == temp && grid[rowPosition-(i-2)][colPosition-(i-2)] == temp && grid[rowPosition][colPosition] != ' ')
            win(temp);

        else if (grid[rowPosition+(i-3)][colPosition-(i-3)] == temp && grid[rowPosition+(i-1)][colPosition-(i-1)] == temp && grid[rowPosition+(i-2)][colPosition-(i-2)] == temp && grid[rowPosition][colPosition] != ' ')
            win(temp);

        else if (grid[rowPosition-(i-3)][colPosition+(i-3)] == temp && grid[rowPosition-(i-1)][colPosition+(i-1)] == temp && grid[rowPosition-(i-2)][colPosition+(i-2)] == temp && grid[rowPosition][colPosition] != ' ')
            win(temp);

        else if (grid[rowPosition+(i-3)][colPosition+(i-3)] == temp && grid[rowPosition+(i-1)][colPosition+(i-1)] == temp && grid[rowPosition+(i-2)][colPosition+(i-2)] == temp && grid[rowPosition][colPosition] != ' ')
            win(temp);
    }
}

void readRows(char grid[row][col], int i)
{
    for (int j=0; j < col; j++)
    {
        checkVertical(grid[row][col], i, j);
        checkHorizontal(grid[row][col], i, j);
        checkDiagonal(grid[row][col], i, j);
    }
}

void check(char grid[row][col])
{
    for (int i=0; i < row; i++)
    {
        readRows(grid[row][col], i);
    }
}