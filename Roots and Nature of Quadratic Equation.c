#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,D , root1,root2;
	printf("Enter coefficients a, b and c: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	D=(b*b)-4*a*c;
	if(D>0){
	    root1 = (-b + sqrt(D))/(2*a);
	    root2 = (-b - sqrt(D))/(2*a);
		printf("root1 = %.2f and root2 = %.2f",root1,root2);
	}
	else if(D==0){
		root1=root2=(-b+sqrt(D))/(2*a);
		printf("root1 = root2 = %.2f",root1);
	}
	else if(D<0){
		double real = -b/(2*a);
		double imaginary = sqrt(-D)/(2*a);
		printf("root1 = %.2f+%.2fi and",real , imaginary);
		printf(" root2 = %.2f-%.2fi",real , imaginary);
	}
	return 0;
}