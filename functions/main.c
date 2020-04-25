#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*                                // cube of a number *****************************************************but 5 ka glt aara h
int cube (int x)
{
    return pow(x,3);
}
int main()
{
int a,c ;
printf("enter the number whose cube you want to find");
scanf("%d",&a);
c=cube(a);
printf("%d",c);
}




                        //diamerter ,circumfrence ,area

float PI=3.14;
float diameter (float x)
{
    return (2*x);
}
float cir(float x)
{
    return (2*PI*x);
}
float area (float x)
{
    return (PI*x*x);
}

float main()
{
    float r,ar,ci,di;
    printf("enter the radius \n");
scanf("%f",&r);
di=diameter(r);
ar=area(r);
ci=cir(r);
printf("%0.6f\n",PI);
printf("diameter of circle is %0.6f\n",di);
printf("cir of circle is %0.6f\n",ci);
printf("area of circle is %0.6f\n",ar);
}


                //max and min
int maximum(int x ,int y)
{
    return (x>y)?x:y;
}
int minimum(int x ,int y)
{
    return (x<y)?x:y;
}
int main()
{
    int a,b;
    printf("enter two value whom you want to compare \n");
    printf("first number is \t ");
    scanf("%d",&a);
    printf("second number is \t ");
    scanf("%d",&b);
    printf("maximum of two no is %d\n\n",maximum(a,b));
    printf("minimum of two no is %d\n\n",minimum(a,b));

}


                        //even odd

int odd(int x)
{
    return x%2;
}
int main()
{
    int a,b;
    printf("enter a number you want to check\n");
    scanf("%d",&a);

    if (odd(a)==0)
        printf("its even");
    else printf("its odd ");
}


                    //prime ,amstrong ,perfect
int amstrong(int x);
int prime(int x);
int perfect(int x);
int main()
{
    int a;
    printf("enter a number you want to check \t ");
    scanf("%d",&a);
    if(amstrong(a))
        printf("\n amstrong\t\t = \t\t yes \n");
    else printf("\n amstrong\t\t = \t\t no \n");


    if(prime(a))
        printf("\n prime \t\t \t= \t\t yes \n");
    else printf("\n prime\t\t\t = \t\t no \n");

    if (perfect(a))
        printf("\n perfect\t\t = \t\t yes \n");
    else printf("\n perfect\t\t = \t\t no \n");
return 0;}
int prime(int x)
{
    int i;
    for (i=2;i<=x/2;i++)
    {
        if (x%i==0)
        {
            return 0;
        }
    }
return 1;
}
int amstrong(int x)
{   int d,sum=0,or,last,digits,i;
        or=x;
    digits=(int)log10(x)+1;
    while(or>0)
    {
        last=or%10;
        d=pow(last,digits);
        sum=sum+d;
        or=or/10;
    }
return (sum==x);
}
int perfect(int x)
{
    int i,n,sum=0;
    n=x;
    for (i=1;i<n;i++)
    {
        if (n%i==0)
            sum=sum+i;
    }
    return (sum==x);
}


            //AMStrong between interval

int amstrong(num );

int main()
{
    int ul,ll,am;
    printf("enter upper limit and lower limit \n");
    scanf("%d%d",&ul,&ll);
    am=amstrong(ll,ul);
    printf("%d\t",am);
}
int amstrong(num )
{int digits,last,temp,sum=0;
    num=temp;
    while (temp!=0)
    {
        digits=(int)log10(temp)+1;
        last=temp%10;
        sum=sum+pow(last,digits);
        temp=temp/10;
    }
if (num==sum)
{
    return 1;}
    else return 0;

}
void print(int x,int y)
{
    while (x<=y)
    {

        if (amstrong(x))
        {
            printf("%d",x)
;        }x++;
    }
}

*/

                    //prime number between intervals

int prime(int x,int y);
int main()
{
        int a,start,end;
        printf("enter starting and ending number \t");
        scanf ("%d%d",&start,&end);
    while (start<=end)
    {
    if(prime(start,end))
    {
        printf("%d",start);
    }
    start++


;}
}
int prime(int x,int y)
{   int i,j,isprime=1;
    for (i=x;i<=y;i++)
    {
        for (j=2;j<=x/2;j++)
        {
            if (i%j==0)
                return 0;

        }
    }
        return 1;
}
