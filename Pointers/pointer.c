#include <stdio.h>
        /**
 * tinkering with address of array and values
 *
 * Return: Always 0.
 */

int main(void)
{
int *t;
 int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  t = &a[0];
 printf("%d",t[4]);
 return 0;
}

