#include <stdio.h>
int main(){
	int m,n , islower=1 , i , j ,a[100][100];
	printf("Enter no of rows, columns: ");
	scanf("%d %d",&m,&n);
	if(m!=n){
		printf("Enter elements of matrix:\n");
		printf("Matrix must be square matrix\n");
		return 0;
	}

	printf("Enter elements of matrix:\n");
	for(int i=0 ; i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0 ;i<m;i++){
		for(int j=i+1;j<n;j++){
			if(a[i][j]!=0){
				islower=0;
				break;
			}
		}
		if(islower==0){
			break;
		}
	}
	if(islower){
		printf("Lower triangular matrix\n");
	}
	else{
	printf("Not a lower triangular matrix\n");
	}
	return 0;
}

	



