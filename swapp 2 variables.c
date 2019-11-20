#include<stdio.h>
#include<conio.h>
 void main()
{
          int a,b;
                    printf("enter the values of a and b \n");
                    scanf("%d%d",&a,&b);
                    printf("\n before swapping- \n");
                    printf("\n a=%d",a);
                    printf("\n b=%d",b);
                    a=a+b;
                    b=a-b;
                    a=a-b;
                    printf("\n after swapping-\n");
                    printf("\n a=%d",a);
                    printf("\n b=%d",b);


                    getch();
}
