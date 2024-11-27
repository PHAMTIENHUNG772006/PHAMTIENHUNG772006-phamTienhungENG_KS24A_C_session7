#include <stdio.h>
int main(){
	int i, n;
	printf("nhap so phan tu trong mang :");
	scanf("%d", &n);
	int arr[n];
	for( i = 0;i < n;i++) {
	    printf(" nhap du lieu vao mang :",i + 1);
	    scanf("%d", &arr[i]);
    }	 
	    printf("mang ma ban nhap la :\n");	 
    	for(i=0;i<n;i++){
		printf(" %d\n", arr[i]);
	}
	return 0;
}
