#include<stdio.h>
#include<stdlib.h>

void insert(int b1[4], int hash1[10], int x1, int i1){
        int i;
        if(hash1[x1]==(-1)){
                hash1[x1]=b1[i1];
                printf("x1=%d", x1);
                //return;
        }
        else{
                x1= x1+1;
                printf("else");
                insert(b1, hash1, x1, i1);
        }
}

void linearprobing(int b[4], int hash[10]){
        int x, i, j;
        //kmod10
        printf("inside linear prob");
        for(i=0; i<4; i++){
                printf("\n%d", b[i]);
        }
        for(i=0; i<4; i++){
                x= b[i]%10;
                insert(b, hash, x, i);
        }
        return;
}

int main(){
        int i,a[4], hash2[10];
        for(i=0; i<10; i++){
                hash2[i]= (-1);
        }
        printf("enter the element of the array:\n");
        for(i=0; i<4; i++){
                scanf("%d",&a[i]);
        }
        linearprobing(a, hash2);
        printf("\nthe result array is:\n");
        for(i=0; i<10; i++){
                printf("\n%d", hash2[i]);
        }
        return 0;
}
