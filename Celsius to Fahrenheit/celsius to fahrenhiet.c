#include<stdio.h>
int main()
{
    float celsius,fahrenhiet;
    printf("Enter Celsius Value : ");
    scanf("%f",&celsius);
    fahrenhiet = ((celsius*9)/5)+32;
    printf("Fahrenheit Value = %.2f",fahrenhiet);
    return 0;
}
