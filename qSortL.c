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
	int pivot = array[low];
	int p = high + 1;

	for (int q=high; q>=low; q--){
		if (array[q] > pivot){
			p--;
			swapFn(&array[p], &array[q]);
		}
	}
	swapFn(&array[p-1], &array[low]);

	return p-1;
}


void sortFn(int array[], int low, int high){
        if (low < high){
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
