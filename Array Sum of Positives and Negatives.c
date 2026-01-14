#include <stdio.h>
int main(){
	int i,n ,ar[30], posN=0,negN=0;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&ar[i]);
		
		if(ar[i]>0){
			posN+=ar[i];
		
		}
		else if(ar[i]<0){
			negN+=ar[i];
		}
	}
	printf("%d\n",posN);
	printf("%d\n",negN);
}