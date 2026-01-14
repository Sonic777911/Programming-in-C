#include <stdio.h>

int main() {

	int i , j ,n, trans[30][30],a[30][30];
	scanf("%d",&n);
	for(i = 0; i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
		}
	}
	for(i = 0; i<n;i++){
		for(j=0;j<n;j++){
			trans[j][i] = a[i][j];
		}
	}

	for(i = 0; i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", trans[i][j]);
		}
		printf("\n");
	}

	return 0;
}
