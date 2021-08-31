#include "main.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  print_alphabet();
  _putchar('\n');
  return (0);
}

void print_alphabet(void)
{
  char a = 'a';

  while(a <= 'z')
  {
    _putchar(a);
    ++a;
  }
}
