#include<stdio.h>
int main()
{
    double base,height,area;
    printf("Enter Height:\n");
    scanf("%lf",&height);
    printf("Enter Base:\n");
    scanf("%lf",&base);
    area = height * base;
    printf("Area is : %.2lf\n",area);
    getch();

}


