#include <stdio.h>
int  main(){
int si,p,t,r;
printf("input principle amount: ");
scanf("%d",&p);
printf("input rate of intrest:");
scanf("%d",&r);
printf("input time in years:");
scanf("%d",&t);
si=p*t*r/100;
printf("yor simple intrest is:%d",si);
return 0;

}