#include <stdio.h>
#include <math.h>

int main()
{ 
   int i;
   unsigned long x;
   int max = 100000000; // 10^8
   for (i=0; i<max; i++){
       x = pow(i,2);
   }

   return 0;
}

// Comandos pra compilar: 
// gcc exercicio1/ex1.c -o exercicio1/ex1
// gcc exercicio1/ex1.c -O3 -o exercicio1/ex1o3
// measure-command { ./exercicio1/ex1 }
// measure-command { ./exercicio1/ex1o3 } 