#include<stdio.h>
#include<omp.h>


void calculate_factorial(int num_fac){
	int res_arr[num_fac];
	int m; 
	int result = 1;
	
	omp_set_num_threads(num_fac);
	
	#pragma omp parallel
	{
		
		m = omp_get_thread_num();
		res_arr[m] = m+1;
	}
	
	for(int i=0; i<num_fac; i++){
		result = result* res_arr[i];
	}
	
	printf("Result: %d\n", result);

}


int main(){
	
	printf("Enter the number to calculate the factorial: ");
	int num_fac;
	scanf("%d", &num_fac);
	
	calculate_factorial(num_fac);
	
	printf("\n");
	return 0;
}
