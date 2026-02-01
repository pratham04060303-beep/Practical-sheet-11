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

    int arr3[size + size1];

    for(int x = 0;x < size + size1;x++){

        if(x < size){
            arr3[x] = arr[x];
        }else{
            arr3[x] = arr1[x - size];
        }

    }

    for(int x = 0;x < size + size1;x++){

        printf("%d|",arr3[x]);

    }


}