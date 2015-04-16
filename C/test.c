#include <stdio.h>
 
/* function to generate and retrun random numbers. */
int * getTable(int value)
{
   static int tblMulti[10];
   int i;
   for ( i = 0; i < 10; ++i)
   {
      tblMulti[i] = value*(i+1);
   }
 
   return tblMulti;
}

int main ()
{
   int *p;
   int i;
   int value=9;

   p = getTable(value);
   for ( i = 0; i < 10; i++ )
   {
       printf("Multiplication of %d with %d is %d\n",value, i+1, *(p + i) );
   }
 
   return 0;
}
