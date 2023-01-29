#include<stdio.h>


void print_arr(int arr2[], int len_arr){
	for(int i=0; i<len_arr; i++){
		printf("%d, ", arr2[i]);
	}
	
	printf("\n");
}


void putting_val(int main_arr[], int arr1[], int x, int i){		
		if(arr1[x] == -1){
			arr1[x] = main_arr[i];
		}
		else{
			putting_val(main_arr, arr1, x+1, i);
		}
}


void hashing_fn(int main_arr[], int arr1[]){
	for(int i=0; i<3; i++){
		int x = main_arr[i] % 10;
		putting_val(main_arr, arr1, x, i);
	}
}


int main() {
	int arr1[5];
	
	for(int i=0; i<5; i++){
		arr1[i] = -1;
	}
	
	printf("Initial array: ");
	print_arr(arr1, 5);
	
	int main_arr[3] = {21, 22, 32};	
	
	hashing_fn(main_arr, arr1);
	
	printf("Final array: ");
	print_arr(arr1, 5);
	
	return 0;
}
