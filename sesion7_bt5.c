#include<stdio.h>
int main(){
	for(int i=0;i<5;i++){
	int number[5];
		printf(" nhap du lieu vao mang phan tu: % d\n",i);
		scanf("%d", &number[i]);
}	
	int number[]={};
	int cout=1;
	int max = number[0];
	int min = number[0];
	
	    for(int i=0;i<5;i++){
	       if (number[i]>max){
	     	max = number[i];
	    }
	        }
	     for(int i=0;i<5;i++){
	       if (number[i] < min){
	     	min = number[i];
	}
        }
printf("so max la : %d\n", max);
printf("so min la : %d", min);
	return 0;
}
