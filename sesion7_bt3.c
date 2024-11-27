#include <stdio.h>
int main(){
	int arr[5] = {};
	int i;
	arr[0] = 7;
	arr[1] = 3;
	arr[2] = 8;
	arr[3] = 9;
	arr[4] = 2;
	arr[5] = 6;

	    printf("mang ma ban la :\n");
    	for(i=0;i<5;i++){
		printf(" %d\n", arr[i]);
	}
	return 0;
}
