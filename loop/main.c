#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
 /*                                            `                      //1 to n while
{   int a,i;
    printf("enter no upto you want to print\n");
    scanf("%d",&a);
    i=1;
    while (i<=a)
    {
        printf("%d \n\n",i);
        i++;
    }


    return 0;
}

                                                                    // i to n using for

{
    int a,i;
    printf("enter no upto you want to print\n");
    scanf("%d",&a);
    for (i=1;i<a;i++)
    {
        printf("%d\n\n",i);
    }
    return 0;
}

                                                                    //alphabets
{
    char i;
    i='a';
    while (i<='z')
    {
        printf("%c \t",i);
        i++;
    }


    return 0;
}
                                                                    // alphabets

{
    char i;
    for (i='a';i<='z';i++)
    {
        printf("%c \t",i);
    }
    return 0;
}


                                                                //1 to n while even
{   int a,i;
    printf("enter no upto you want to print\n");
    scanf("%d",&a);
    i=1;
    while (i<=a)
           {
           if (i%2==0)
    {
        printf("%d \n\n",i);

    }i++;
           }

    return 0;
}

                                                                // i to n using for

{
    int a,i;
    printf("enter no upto you want to print\n");
    scanf("%d",&a);
    for (i=1;i<a;i++)
            if (i%2==0)
                {
                    printf("%d\n\n",i);
                }
    return 0;
}


                                                                //1 to n sum of all odd numbers
{   int a,i,sum;
    printf("enter no upto you want to print\n");
    scanf("%d",&a);
    i=1;
    sum=0;
    while (i<=a)
           {


           if (i%2==1)
    {
        printf("%d \n\n",i);
        sum=sum+i;
    }
    i++;

           }
    printf("%d",sum);
    return 0;
}


                                                                // i to n odd sum using for

{
    int a,i,sum=0;
    printf("enter no upto you want to print\n");
    scanf("%d",&a);
    for (i=1;i<a;i++)
            {if (i%2==1)
                {
                    printf("%d\n\n",i);
                    sum=sum+i;
                }}
             ;   printf("%d",sum);
    return 0;
}



                                                                //table

{
    int a,i=1,table;
    printf("enter your no for whome you want a table  >>>>>>\t");
    scanf("%d",&a);
    for (i=1;i<=10;i++)

    {   table=i*a;
        printf("%d * %d = %d\n",a,i,table );
}
}


                                                                //table while


{
    int a,i=1,table;
    printf("enter your no for whome you want a table  >>>>>>\t");
    scanf("%d",&a);
    while (i<=10)

    {   table=i*a;
        printf("%d * %d = %d\n",a,i,table );
        i++;
    }
}


                                                        // no of digit in digit
{
    int a,i=0;
    printf("enter a number \n");
    scanf("%d",&a);
    while (a!=0)
    {
        i++;
        a /=10;


    }
        printf("%d\n\n",i);
    return 0;
}

                                                        //find first and last

{int a,i=0,last,first,h;
    printf("enter a number \n");
    scanf("%d",&a);

// to find last digit
last=a%10;
printf("your last digit is %d \n\n\n",last);
first=a;
//to find first *************************************************************************************
while (first>=10){
        first=first/10;}
printf("your first digit is %d \n\n\n",first);

}

// agar ek bar a change ho gaya to baaad me changed vala he rahega isliye initial ko khabhi mt badlo and try to foci=us on changed value hamesha first=a karo and trhen aage bhado isse bhot jyada he man laga rhtya h


                                                    //sumn of last and first
{
    int a;
    int sum,first,last;
    printf("enter your no \t");
    scanf("%d",&a);

    last=a%10;
    printf("\nthe last digit in no is %d\n",last);
    first=a;
    while(first>=10)
    {
        first=first/10;
    }
    printf("your first digit is %d \n",first);
    sum=last+first;
    printf("sum of last and first is %d",sum);
}


                                                            //all three

{   int a,first,last,num,i=0;
    printf("enter you number \n");
    scanf("%d",&a);

    last=a%10;
    first=a;
    while (first>=10)
    {
        first/=10;
    }
    num=a;
    while(num!=0)
    {
        i++;
        num=num/10;
    }
    printf("your first digit is \t %d\n\n",first);
    printf("your last digit is \t %d\n\n",last);
    printf("no of digits are %d",i);
}


                                                        ////sum of all digits

{   int a,sum=0,num;
    printf("enter you number \n");
    scanf("%d",&a);
    num=a;
    while (num>0)
    {
        sum=sum+num%10;
        num/=10;

    }
    printf("sum of all digits are %d",sum);
}


                                                        // product of number
{
int a,prod=1,num;
    printf("enter you number \n");
    scanf("%d",&a);
    num=a;
    while (num>0)
    {
        prod=prod*(num%10);
        num/=10;

    }
    printf("product of all digits are %d",prod);

}

                                                    //reverse the digit

{   int num,reverse=0;
    printf("enter you number \n");
    scanf("%d",&num);

            while (num!=0)
    {
            reverse=(reverse*10)+(num%10);
            num/=10;
    }
            printf("your reverse number is %d\n\n",reverse);

}
                    //swap first and last**********************************************************************************************
{
     int num,reverse=0,first,digits,last,swap;
     printf("enter you number \n");
    scanf("%d",&num);

        last=num%10;
        //digits nikalo
        first=(int) num/pow(10,digits);
        printf("your first digit is \t %d \n\n",first);
         printf("your last digit is \t %d \n\n",last);
         printf("number of  digit is \t %d \n\n",digits);
        printf("=======================================================================================");


        swap=((last * pow(10,digits))+first)+(num-(first*pow(10,digits)+last));//**************************************
        printf("your swapped number is %d\n\n\n",swap);


}


                        //palandrom or not
{

     int num,a,reverse=0;
         printf("enter you number \n");
        scanf("%d",&a);
        num=a;
        while(num!=0)
            {
                reverse=(reverse*10)+num%10;
                num=num/10;
            }
        printf("your reversed number is %d \n\n",reverse);
            if(a == reverse)
            {
                printf("they are palandrome ");
            }
            else printf("kahe ka palandrom");
}

                                                                    //aissec
{
    int i;

    for (i=0;i<=255;i++)
    {
        printf("aissec value of character %c\t=%d\n",i,i)
    ;}
}

                                                                // power without pow
{


int i,num,power,ans=1;
printf("enter a  number ");
scanf("%d",&num);
printf("enter its exponent");
scanf("%d",&power);

for (i=1;i<=power;i++)
{
    ans=ans*num;
}
printf("your number after power is %d",ans);
}

                                                                //FACTOR OF NUMBER

{
        long i,num,power;
        printf("enter a  number ");
        scanf("%d",&num);
        power=num;
        for (i=2;i<power;i++)
        {
            if (num%i==0)
                printf("factor of %ld is \t %ld \n",num,i);
        }
return 0;
}
*/

/*
                                                                // number to word s****************************************************
{
        int num,var=0;
        printf("enter a  number ");
        scanf("%d",&num);

    while(num!=0)
    {
     var=(var*10)+(num%10);
     num/=10;
    }
while(var!=0)
  {
   switch(var%10)
{
    case 1:
    printf("one \t ");break;
case 2:
    printf("two \t");break;
case 3:
    printf("three\t");break;
case 4:
    printf("four\t");break;
case 5:
    printf("five\t");break;
case 6:
    printf("six\t");break;
case 7:
    printf("seven\t ");break;
case 8:
    printf("eight\t");break;
case 9:
    printf("nine\t");
}

var=var/10;
  }
}

/*
                                                        //factorial
{

        int num,var=1,i;
        printf("enter a number \t");
        scanf("%d",&num);

        for (i=num;i>0;i--)
        {
            var=var*i;

        }
        printf("factorial of %d is %d ",num,var);
}

                                                        //hcf or
{       int small,num1,num2,hcf=1,i;
        printf("enter two number \t");
        scanf("%d%d",&num1,&num2);

        if (num1>num2)
         {
             small=num2;
         }
         else {small=num1;}

         for (i=2;i<=small;i++)
         {
             if (num1%i==0)
             {
                 if(num2%i==0)
                 {
                     hcf=i;
                 }

             }
         }
         printf("% is hcf of %d and %d \n",hcf,num1,num2);
}

                    //lcm

{
       int max,num1,num2,lcm=1,i;
        printf("enter two number \t");
        scanf("%d%d",&num1,&num2);

  if (num1>num2)
  {
      num1=max;
  }
  else {num2=max;
  }
  while(1)
  {
        if (i%num1==0)
        {
            if (i%num2==0)
            {
                lcm=i;
            }
        }
  }
  i+=max;
  printf("lcm of %d and %d is \t %d",num1,num2,lcm);
}



                                                                        //prime no
{

        int num,isprime,i;
        isprime=1;
        printf("enter a number \t");
        scanf("%d",&num);
        for(i=2;i<=num/2;i++)
        {
            if (num%i==0)
            {
               isprime=0;
               break;
            }

        }
if (isprime==1)
{printf("its a prime no \n");
}
 else {printf("its not a prime no \n");
 }

 }

                                                                        //prime no between 1 to n
{

        int j,num,isprime,i;

        printf("enter last  number \t");
        scanf("%d",&num);
        for (j=2;j<=num;j++)
                {
                    isprime=1;
                        for(i=2;i<=j/2;i++)
                                    {
                                            if (j%i==0)
                                                    {
                                                                isprime=0;
                                                                break;
                                                    }
                                    }

                        if (isprime==1)
                                {printf("%d its a prime no \n",j);}

                }
}


                                                                        //sum of all prime no

{

        int j,num,f,isprime,i,var=0;
        printf("enter first  number \t");
        scanf("%d",&f);

        printf("enter last  number \t");
        scanf("%d",&num);
        for (j=f;j<=num;j++)
                {
                    isprime=1;
                        for(i=2;i<=j/2;i++)
                                    {
                                            if (j%i==0)
                                                    {
                                                                isprime=0;
                                                                break;
                                                    }
                                    }

                        if (isprime==1)
                            {       printf("%d is prime no\n",j);
                                        var+=j
                            ;}


                }
   {printf("%d",var);}
}

                        //prime factor***********************************************************************************
{
        long i,num,power,j,isprime;
        printf("enter a  number ");
        scanf("%ld",&num);

        for (i=2;i<num;i++)
        {if(num%i==0)
        {
            isprime=1;
            for (j=2;j<=i/2;j++)
            {
                if (i%j==0)
                {
                    isprime=0;break;
                }
            }
            if (isprime==1)
        printf("%d\n",i);

        }
        }
}

                                                                // amstrong number

{
    int a,or,oz,sum=0,d,i=0;
    printf("enter digit you want to check its a amstrong number or not\n");
    scanf("%d",&a);
or=a;
    while(or!=0)
        {   i++;
            or/=10;

        }
    printf("number of digits are %d\n",i);
oz=a;
while (oz>0)
 {
    d=oz%10;
    sum=sum+pow(d,i);
    oz/=10;
}
printf("sum %d\n",sum);


if (sum==a)
printf("ha");
else
printf("na");


}


                                                                    // perfect no

{
    int a,or,sum=0,i;
    printf("enter a number");
    scanf("%d",&a);
    or=a;

        for (i=1;i<=or/2;i++)
        { if (or%i==0)
                sum=sum+i;
        }
        printf("sum %d\n\n",sum);
        if (sum==a)
            printf("yes its a perfect no");
        else printf("its not a perfect number");

}

*/
            //fibonnaci*************************************************************************************************,

{
    int a,i,term,b,c;
    printf("enter number upto which you want to run your series");
    scanf("%d",&term);
    a=0;
    b=1;
    c=0;
    for (i=1;i<=term;i++)
    {printf("%d,",c);
        a=b;
        b=c;
        c=a+b;
    }

}

