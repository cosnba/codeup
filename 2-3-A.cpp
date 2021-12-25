#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,delta,r1,r2;
    scanf("%lf%lf%lf",&a,&b,&c);

    delta=b*b-4*a*c;
    r1=(-b+sqrt(delta))/(2*a);
    r2=(-b-sqrt(delta))/(2*a);
    
    if (delta<0) {
        printf("No real roots!\n");
    }else{
        printf("r1=%7.2f\nr2=%7.2f\n",r1,r2);
    }
    return 0;
}