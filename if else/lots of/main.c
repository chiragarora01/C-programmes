#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()

            //sign of no
/*
{   int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if (a>0)
        printf("a is positive");
    else if (a==0)
        printf("a is zero");
   else printf("a is negative");

    return 0;
}


            // divisible by 5 or 11

{
    int a;
    printf("enter a number");
    scanf("%d",&a);

    if (a%5==0)
        printf("%d is divisible by 5",a);
    else if(a%11==0)
        printf("%d is divisible by 11 ",a);
    else printf("kuch bhi ni h");
    return 0;
}



                // EVEN ODD
{
    int a;
    printf("enter a number");
    scanf("%d",&a);

    if (a%2==0)
        printf("no is even ");
    else printf("mp is odd");
}



            // LEAP YEAR
            // DIVISIBLE BY 4 AND NOT BY 100
            // DIVISIBLE BY 400
{
    int a;
    printf("enter a number");
    scanf("%d",&a);


        if(((a%4==0)&&(a%100 != 0))|| (a%400==0))
        printf("%d is a leap year",a);
        else printf("it is not a leap year");
}


            /* ALPHABET OR NOT
            a=97
            z=122
            A=65
            Z=90
            DIGIT = 48-57


{
    char a;
    printf("enter a number");
    scanf("%c" ,&a);

        if (a >= 97&& a <= 122)
                printf("its in lower case ");
        else if (a >= 65&& a<= 90)
                printf("ye to bada hai");
        else printf("its  a no");
    return 0;
}



      //vowal or consonant


{
    int a;
    printf("enter a number");
    scanf(" %c",&a);

    if (a='a','e','i','o','u')
        printf("vowl");
    else printf("consonant");

}


            // WEEK NO DAY

{
      int a;
    printf("enter a number");
    scanf(" %d",&a);
    if (a==1)
            printf("monday");
    if (a==2)
            printf("tuesday");
            if (a==3)
            printf("wednesday");
            if (a==4)
            printf("thursday");
            if (a==5)
            printf("friday");
            if (a==6)
            printf("saturday");
            if (a==7)
            printf("sunday");
}


  */              // notes and amount

{
    int amount ,notes,n2000,n500,n200,n100,n50,n20,n10;
    printf("enter the amount of money");
    scanf("%d",&amount);


    if (amount>=2000)
       {

        amount = n2000*2000;
        n2000=amount/2000;
        printf("%d notes of 2000 required \n \n",n2000);
       }
    if

        (amount>=500)
        amount -= n500*500;
        n500=amount/500;
    if

        (amount>200)
        amount = amount%200;
        n200=amount/200;
    if

        (amount>100)
        amount = amount%100;
        n100=amount/100;
    if

        (amount>50)
        amount = amount%50;
        n50=amount/50;
    if

        (amount>20)
        amount = amount%20;
        n20=amount/20;
    if

        (amount>10)
        amount = amount%10;
        n10=amount/10;



printf("%d notes of 500 required \n \n",n500);
printf("%d notes of 200 required \n \n",n200);
printf("%d notes of 100 required \n \n",n100);
printf("%d notes of 50 required \n \n",n50);
printf("%d notes of 20 required \n \n",n20);
printf("%d notes of 10 required \n \n",n10);
}



            //triangle
/*
{
    int a,b,c,i;
for (i=1;i<=3;i++)
    printf("angle %d is \n",i);
    scanf("%d%d%d",&a,&b,&c);

    if ((a+b+c==180)&& (a!=0)&& (b!=0)&&(c!=0))
        printf("trangle is valid ");
    else printf("nope ");
}


        // traingle sides
{
  {
    int a,b,c,i;
    a=b=c!=0;
for (i=1;i<=3;i++)
    printf("sides %d is \n",i);
    scanf("%d%d%d",&a,&b,&c);


    if (a+b>c)
    {   if (b+c>a)
            {    if (c+a>b)
                 printf("triangle is valid ")
 ;            else printf("not valid ");
    }
        else printf("not valid ");
    }       else printf("not valid ");
  }
}


    // QUAD

{
    int a,b,c;
    float d,root1,root2;

    printf("enter all the value along with sign in form of ax^2+bx+c=0\n\n\\n");

    printf("enter cofficient of x^2 \n");
    scanf("%d",&a);


    printf("enter cofficient of x \n");
    scanf("%d",&b);


    printf("enter constant \n");
    scanf("%d",&c);

    d=(pow(b,2)-4*a*c);

    if (d>=0)
{


        root1= (-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;

}


    else printf("imiginary roots");


    printf("%15f is your discriment \n\n",d);
    printf("%15f is your root1 \n\n",root1 );
    printf("%15f is your root2 \n\n",root2 );
}


        //schoool


{
    int phy,bio,math,chem,comp;
    float per;
    printf("enter marks of bio \t");
    scanf("%d",&bio);
    printf("enter marks of maths\t");
    scanf("%d",&math);
    printf("enter marks of phys\t");
    scanf("%d",&phy);
    printf("enter marks of chem\t");
    scanf("%d",&chem);
    printf("enter marks of comp\t");
    scanf("%d",&comp);

    per=(float)100*(bio+phy+math+chem+comp)/500;
printf("\n\n\n\n your overoall percentage is %f \n\n\n\n",per);

if (per>=90)
    printf("grade A");

else if (per>=80)
    printf("grade b");

else if (per>=70)
    printf("grade c");

else if (per>=60)
    printf("grade d");

else if (per>=40)
    printf("grade e");

else if (per<=40)
    printf("grade f");

}




        //salery

{
    float bs,hra,da,gross;

    printf("enter your basic salary");
    scanf("%f",&bs);

    if (bs<=10000)
{
        hra=bs*0.2;
        da =bs*0.8;
}
    else if (bs<=20000)
{
        hra=bs*0.25;
        da =bs*0.9;
}
    else if (bs>20000)
{
        hra=bs*0.3;
        da =bs*0.95;

}
gross =hra + bs + da ;
    printf("your gross is %2f\n",gross);


}



{
      float sub,bs,amount1,amount2,amount3,amount4,gross;

    printf("enter units ");
    scanf("%f",&bs);

    if (bs<=50)
{
        amount1=bs*0.5;
        bs=bs-50;
        printf("your 1st charge is %f\n",amount1);
}
    if (bs<=100)
{
        amount2=bs*0.75;
        bs=bs-100;
        printf("your 1st charge is %f\n",amount2);

}
    if (bs<=250)
{
        amount3=bs*1.2;
        bs=bs-250;
        printf("your 1st charge is %f",amount3);
}



    if (bs>250)
{

        amount4=bs*1.5;
}

sub=0.2*bs;
gross =amount1+amount2+amount3+amount4+sub  ;
    printf("your gross is %2f\n",gross);


}
















*/
