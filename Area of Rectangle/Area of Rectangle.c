#include<stdio.h>
int main()
{
    double length,width,area;
    printf("Enter Rectangle length and width value : ");
    scanf("%lf %lf",&length,&width);
    area = (length *width);
    printf("Area of Rectangle = %.2lf\n",area);
    return 0;
}
