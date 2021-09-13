#include "main.h"
/**
 *print_chessboard - get in
 *Return: nothing
 *@a: 2d array
 */

void print_chessboard(char (*a)[8])
{
int b = 0;

while (b < 8)
{
int c;

for (c = 0; c < 8; c++)
{
_putchar(a[b][c]);
}
_putchar('\n');

b++;
}
}
