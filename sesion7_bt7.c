#include<stdio.h>
int main() {
	int n, check = 0;
	printf("nhap so phan tu cho mang : ");
	scanf("%d", &n);
	if (n < 1 ){
		printf("nhap lai do dai cau mang");
		return 1;
	}
	int arr[n] ;
	for(int i=0;i<n;i++){

	do{
		printf("nhap lai phan tu thu %d", i + 1);
		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 0){
			check = 1;
		} else{
			check = 0;
		}
	    } while(check);
    }
	printf("\n phan tu cua mang :");
	for(int i=0;i<n;i++){
	   printf("\t%d", arr[i]);
}

return 0;
}
