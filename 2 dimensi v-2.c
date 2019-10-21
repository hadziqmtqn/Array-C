#include <stdio.h>
#include <stdlib.h>

int main()
   {
   int x [10];
   int i ,z, a;
   for(i = 0; i < 3; ++i)
   {
       for(z = 0; z < 4; ++z)
   {
       for(a = 0; a < 5; ++a)
   {
      printf("&x[%d][%d][%d][= %p\n", i, z, a, &x[i]);
   }
   }
   }
   printf("Address of array x: %p", x);
   return 0;
}
 
