#include<stdio.h>
#include<omp.h>

void adding_lists(){
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {5, 4, 3, 2, 1};
	int res[5]; 
	int m;
	
	#pragma omp parallel num_threads(5)
	{
		int m = omp_get_thread_num();
		res[m] = arr1[m] + arr2[m];
	}
	
	printf("The resulant array is: \n");
	for(int i=0; i<5; i++)
		printf("res[%d]: %d\n", i, res[i]);	
}

int main(){
	int m = omp_get_thread_num();
	int n = omp_get_max_threads();
	int k = omp_get_max_threads();
	
	printf("m: %d\n", m);
	printf("n: %d\n", n);
	printf("k: %d\n", k);
	printf("\n");
	
	#pragma omp parallel num_threads(3)
	{
		printf("omp parallel thread number: %d\n", omp_get_thread_num());
	}
	printf("\nAdding Lists\n");
	
	adding_lists();
	
	return 0;
}
