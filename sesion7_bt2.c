#include <stdio.h>
int main(){
	int arr[5];
	int i;
	for( i = 0;i < 5;i++) {
	    printf(" nhap du lieu vao mang :",i + 1);
	    scanf("%d", &arr[i]);
    }	 
	    printf("mang ma ban nhap la :\n");	 
    	for(i=0;i<5;i++){
		printf(" %d\n", arr[i]);
	}
	return 0;
}
