#include<stdio.h>
int main()
{
  float f,c;
  printf("Enter Fahrenheit Value : ");
  scanf("%f",&f);
  c= ((f-32)*5)/9;
  printf("Celsius Value = %.2f\n",c);
  return 0;
}
