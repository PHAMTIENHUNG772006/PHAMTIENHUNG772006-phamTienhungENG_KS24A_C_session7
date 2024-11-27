#include<stdio.h>
int main(){
	
	int arr[]={1,2,3,4,8};
	int doDai = sizeof(arr) / sizeof(int);
	for( int i=0;i<doDai;i++){
		printf("cac phan tu trong mang la : %d\n", arr[i]);
	}
	    printf("do dai cau mang la %d \n", doDai);
	return 0;
}
