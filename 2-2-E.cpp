#include <stdio.h>
#include <math.h>

int main(){
	
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("r1=%7.2f\nr2=%7.2f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
	return 0;
} 
