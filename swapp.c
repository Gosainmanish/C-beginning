#include<stdio.h>
#include<conio.h>
void main()
{
          int a,b,c;
          printf("enter the value of a , b, c \n");
           scanf("%d%d%d",&a,&b,&c);
          printf("\n before swapping-\n");

           printf("\n a =%d",a);
          printf("\n b =%d",b);
          printf("\n c =%d",c);
          a=a+b+c;
          b=a-b-c;
          c=a-b-c;
          a=a-b-c;
          printf("\nafter swapping-\n");
          printf("\n a =%d",a);
          printf("\n b =%d",b);
          printf("\n c =%d",c);








       getch();
}

