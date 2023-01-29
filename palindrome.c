#include<stdio.h>


int palin_chk(int low1, int high1, char str[]){
	if(str[low1] == str[high1]){
		
		if(low1 < high1){
		//if(str[i] == str[str_len-i]){
					
			low1= low1+1;
			high1= high1-1;
			palin_chk(low1, high1, str);
		}
		else{
			printf("\n a palindrome");
		}
	}
	else{
		printf("\n NOT Palindrome");
	}
}


int main(){
	int len_str;
	printf("Enter the length of the string: ");
	scanf("%d", &len_str);
	
	char str[len_str];
	printf("\nEnter the string: ");
	scanf("%s", str);
	
	int low = 0;
	int high= (len_str-1);
	palin_chk(low, high, str);
	printf("\n");
	
	return 0;
}
