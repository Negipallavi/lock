#include <stdio.h>
#include <stdlib.h>

int pass()
{
   int n[4], i, p[4];

   printf("\nSet your password of 4 digit\n");

   for (i = 0; i < 4; i++)
   {
      scanf("%d",&n[i]);
   }

   printf("     saved!!!");

   printf("\033[2J \033[H");
   printf("\n\nEnter your password\n");

   for (i = 0; i < 4; i++)
   {
      scanf("%d",&p[i]);
      getchar();
   }

   for (i = 0; i < 4; i++)
   {
      if (p[i]!= n[i])
      {
         printf("     Wrong Password\n");
         return 0;
      }
   }

   printf("     Right Password\n");
   return 1;
}

int main()
{
   int a[3][3], i, j;

   printf("enter an element\n");

   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &a[i][j]);
      }
   }

   printf("output is\n");

   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d  ", a[i][j]);
      }
      printf("\n");
   }

   pass();

   return 0;
}
