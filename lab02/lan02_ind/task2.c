#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

int main (){
double t,x;

printf("x: ");
scanf("%lf", &x);

    
if(x>0){
    t=(2+x*x)/x;
    printf("t =%.3f ", t);}

else if(x>-1 && x<=0){
    t=7.0/3.0+fabs(x+1);
    printf("t = %.3f", t);}

else{
    t=(cos(M_PI*fabs(x)))/x;
    printf("t = %.3f", t);}


return 0;
}
