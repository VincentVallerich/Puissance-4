#ifndef verification_h
#define verification_h

#include <stdlib.h>
#include <stdio.h>

#define row 6
#define col 7

void check(char grid[row][col]);
void win(char winner);
void checkFour(char a, char b, char c, char d);
void checkVertical(char grid[row][col], int rowPosition, int colPosition);
void checkHorizontal(char grid[row][col], int rowPosition, int colPosition);
void checkDiagonal(char grid[row][col], int rowPosition, int colPosition);
void readRows(char grid[row][col], int i);

#endif