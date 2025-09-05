#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the  value a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    c=b+a;
    b=a-b;
    c=a-b;

    printf("after swaping a :%d\n",a);
    printf("After swaping b:%d\n",b);
    return 0;
}