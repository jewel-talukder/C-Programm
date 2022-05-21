#include<stdio.h>
#include<math.h>
int main()
{
    double redius,area;
    printf("Enter Circle redius : ");
    scanf("%lf",&redius);
    area = M_PI*redius*redius;
    printf("Area of Circle = %.3lf\n",area);
    return 0;
}
