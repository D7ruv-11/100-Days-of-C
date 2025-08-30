#include <stdio.h>
int main() {
    float l,b,area,perimeter;
    printf("Enter the length of the rectangle:",l);
    scanf("%f",&l );
    printf("Enter the bredth of the rectangle:",b);
    scanf("%f", &b);
    perimeter= 2*(l+b);
    area=l*b;
    printf("Perimeter is:%f\n",perimeter);
    printf("Area is :%f\n",area);
    return 0;
}