#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    float result1=3.14*radius*radius;
    printf("Area of circle is %.2f\n",result1);
    float result2=2*3.14*radius;
    printf("Circumference of circle is %.2f",result2);
    return 1;
}
