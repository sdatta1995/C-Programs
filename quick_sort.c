#include<stdio.h>

void print_arr(int arr[], int sz) {
	for (int k=0; k<=sz-1; k++) {
		printf("%d, ", arr[k]);
	}
	printf("\n");
}

void swap(int *first, int *second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}

void sort(int arr[], int low, int high) {
	int pivot = arr[high];
	int dyn_pi = high;
	for (int i=low; i<high; i++) { //i=2; high = 8
		if (arr[i] > pivot) { //arr[2] > arr[8] : 8>6 True
			printf("%d:%d;", arr[i], arr[dyn_pi--]);
			swap(&arr[i], &arr[dyn_pi]);
			swap(&arr[dyn_pi], &arr[dyn_pi--]);
			swap(&arr[i], &arr[]);
		}
	}
	swap(&arr[low], &arr[k]);
	printf("\n");
	print_arr(arr, high+1);
}

int main() {
	int a[9] = {5, 2, 8, 9, 1, 7, 3, 4, 6};
	int sze = sizeof(a)/sizeof(a[0]);
	print_arr(a, sze);
	sort(a, 0, sze-1);

	return 0;
}
