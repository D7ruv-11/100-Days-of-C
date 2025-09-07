#include <stdio.h>
int main(){
    int n;
    printf("Input your number:");
    scanf("%d",&n);
    if (n > 0)
        printf("The given number is positive integer");
    else if (n == 0)
        printf("The given number is 0 neither positive nor negative!");
    else
        printf("The given number is negative!");
    return 0;


}
