/*
        project: calculator
        author: Delvin Ida
        Date: 29/09/2026


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
// variable declarations
int num1,num2,sum,diff,product;
float quotient;

// capture inputs
printf("Enter two values,");
scanf("%d%d",&num1,&num2);

// compute
sum = num1 + num2;
diff = num1- num2;
product = num1 * num2;

//output
       printf("%d + %d = %d\n",num1,
       num2,sum);
       printf("%d - %d = %d\n",num1,num2,
       sum);
       printf("%d * %d = %d\n",num1,num2,
       product);
       printf("%d / %d = %f\n",num1,num2,
               quotient);

   return 0;
}

