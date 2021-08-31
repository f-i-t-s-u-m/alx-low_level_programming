#include "main.h"
/**
 * int _islower - Entry point
 * Return:0
 */
int _islower(int c)
{
  if(c >= 'a' && c <= 'z')
    {
      return 0;
    }
  else if (c >= 'A' && c <= 'Z')
    {
      return 1;
    }
  return (0);
}
