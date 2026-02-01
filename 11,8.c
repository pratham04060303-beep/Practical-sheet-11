#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements in array 1 \n");
    scanf("%d",&size);
    int arr[size];

    for(int x = 0; x < size;x++ ){
        printf("Enter %d element of array 1 \n",x);
        scanf("%d",&arr[x]);
    }

    printf("_______________\n\n");

    int size1;
    printf("Enter number of elements in array 2 \n");
    scanf("%d",&size1);
    int arr1[size1];

    for(int x = 0; x < size1;x++ ){
        printf("Enter %d element of array 2 \n",x);
        scanf("%d",&arr1[x]);
    }
    for(int x = 0; x < size;x++){

        printf("%d|%d|",arr[x],arr1[x]);
    }
}