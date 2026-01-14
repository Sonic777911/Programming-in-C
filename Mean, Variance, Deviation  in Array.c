#include <stdio.h>
#include <math.h>
int main(){
	int i,n;
	double sum=0.0, mean,variance=0.0,arr[30],deviation;
	printf("Enter the number of values: ");
	scanf("%d",&n);
	printf("Enter values : ");
	for(int i = 0;i < n;i++){
		scanf("%lf",&arr[i]);
		sum+= arr[i];
	}
	mean= sum/n;
	for(int i = 0; i < n;i++)
		variance +=pow(arr[i]-mean,2);
	
	variance /=n;
	deviation=sqrt(variance);
	printf("Mean = %.2lf\n",mean);
	printf("Variance = %.2lf\n",variance);
	printf("Deviation  = %.2lf\n",deviation);
	return 0;
}