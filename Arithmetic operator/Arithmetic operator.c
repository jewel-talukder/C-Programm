#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter two Integer Number : ");
    scanf("%d %d",&num1,&num2);
    result = num1  +  num2;
    printf("The Sum is = %d \n" , result);

        result = num1  -  num2;
    printf("The Substraction is = %d \n" , result);
     result = num1  *  num2;
    printf("The Multiply is = %d \n" , result);
    result = num1  /  num2;
    printf("The Divide is = %d \n" , result);
      result = num1  %  num2;
    printf("The Remainder is = %d \n" , result);

}
