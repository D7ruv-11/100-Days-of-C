#include <stdio.h>
  int main(){
    int n;
    printf("Enter the year:");
    scanf("%d",&n);
    if(n%4==0 && n%100!=0 || n%400==0  )
    printf("it is a leap year ");
    else
    printf("no it is not a leap year!");
    return 0;

  }