#include "main.h"
void times_table(void)
{
	int i, num, mul;

	  i = 0;

  while (i <= 9)
  {
      num = 0;

      while (num <= 9)
      {
          mul = num * i;

          if ( num == 0){
              _putchar(mul + 48);
          }
          if (mul < 10 && num != 0)
          {
              _putchar(',');
          _putchar(' ');
          _putchar(mul + 48);

          }
          else if (mul >= 10)
          {
               _putchar(',');
          _putchar(' ');
            _putchar((mul / 10) + 48);
            _putchar((mul % 10) + 48);

          }

          num++;
      }
_putchar('\n');
 i++;

  }

}
