#include <stdio.h>
#include <stdlib.h>

int main()

{   int a,b,c;
    printf("enter three no ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
  {

     if (a>c)
            printf("%d is biggest among all",a);
            else
                printf("%d is biggest among all",c)
;  }


   else     if (b>a)
   {

                if (b>c)
                printf("%d is biggest among all",b);
                else printf("%d is biggest among all",c) ;
   }

               return 0;
}
