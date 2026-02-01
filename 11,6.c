#include<stdio.h>

void main(){

    int size;
    int size1;
    printf("Enter number of elements in array 1 \n");
    scanf("%d",&size);
    int arr[size];
    int count = 1;

    for(int x = 0; x < size;x++){
        printf("Enter %d element of array 1 \n",x);
        scanf("%d",&arr[x]);
    }
    
    printf("Enter number of elements in array 2 \n");
    scanf("%d",&size1);
    int arr1[size1];
    for(int x = 0; x < size;x++){
        printf("Enter %d element of array 2 \n",x);
        scanf("%d",&arr1[x]);
    }
    if(size != size1){
        printf("arrays are not equal \n");
    }

    for(int x = 0;x < size;x++){

        if(arr[x] != arr1[x]){
            printf("Arrays are not equal ");
            count += 1;
            break;
        }else{}

    }
}