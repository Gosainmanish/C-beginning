#include<stdio.h>
main()
{
          float a,b,big;
          printf("\n enter the value of a and b");
          scanf("%f%f",&a,&b);
          printf("\n a=%f",a);
          printf("\n b=%f",b);
          big=a>b?a:b;
          printf("\n largest value = %f",big);
return 0;
}
