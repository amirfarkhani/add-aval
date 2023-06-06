#include <stdio.h>


int main()
{
   int a , b , sh = 0;
   scanf("%d%d",&a,&b);

   for(int i = a ; i <= b ; i ++)
   {
       sh = 0 ;
       for (int j = 1 ; j <= i  ; j++)
       {
             if(i%j==0)
                 sh++ ;

             if(sh>2)
             {
                 sh = 0 ;
                 break;
             }
       }

       if(sh == 2)
          printf("%d\n",i);

   }

}

