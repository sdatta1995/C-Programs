#include<stdio.h>


void printArray(int arr[], int lenArr){
        printf("{");
        for (int i=0; i<lenArr; i++){
                printf("%d, ", arr[i]);
        }
        printf("}\n");
}


void swapFn(int *first, int *second){
        int temp = *first;
        *first = *second;
        *second = temp;
}


int partition(int array[], int low, int high){
        int pivot = array[high];
        int indx_to_change = low-1;

        for (int i=low; i<high; i++){
                if (array[i] <= pivot){
                        indx_to_change++;
			
			printf("Before swap ==> indx_to_change(%d),i(%d):arr[indx_to_change](%d),arr[i](%d)\n", indx_to_change, i, array[indx_to_change], array[i]); //rmv SKD

                        swapFn(&array[indx_to_change], &array[i]);

			printf("After swap ==> indx_to_change(%d),i(%d):arr[indx_to_change](%d),arr[i](%d)\n", indx_to_change, i, array[indx_to_change], array[i]); //rmv SKD
                }
        }

	printf("Before final ==> indx_to_change+1(%d),high(%d):arr[indx_to_change+1](%d),arr[high](%d)\n", indx_to_change+1, high, array[indx_to_change+1], array[high]); //rmv SKD

        swapFn(&array[indx_to_change+1], &array[high]);

	printf("After final ==> indx_to_change+1(%d),high(%d):arr[indx_to_change+1](%d),arr[high](%d)\n", indx_to_change+1, high, array[indx_to_change+1], array[high]); //rmv SKD


        return indx_to_change+1;
}


void sortFn(int array[], int low, int high){
	if (low < high){
		printf("low: %d; high: %d \n", low, high);
		int pointerIndex = partition(array, low, high);
        	sortFn(array, low, pointerIndex-1);
	        sortFn(array, pointerIndex+1, high);

	}
}


int main(){
        int mainArr[9] = {5, 2, 8, 9, 1, 7, 3, 4, 6};
        int lenArr = sizeof(mainArr)/sizeof(mainArr[0]);

        printf("Unsorted Array: \n");
        printArray(mainArr, lenArr);

        sortFn(mainArr, 0, lenArr-1);

        printf("Sorted Array: \n");
        printArray(mainArr, lenArr);

        return 0;
}		
