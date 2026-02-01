#include<stdio.h>

void main(){

    int size;
    int size1;
    
    printf("Enter number of elements in 1st array : \n");
    scanf("%d",&size);

    printf("Enter number of elements in 2nd array : \n");
    scanf("%d",&size1);

    int arr[size];
    int arr1[size1];

    int sum1 = 0;
    int sum2 = 0;

    for(int x = 0; x < size;x++){

        printf("Enter %d element of array 1 : \n",x);
        scanf("%d",&arr[x]);


    }
    for(int x = 0; x < size1;x++){

        printf("Enter %d element of array 2 : \n",x);
        scanf("%d",&arr1[x]);

        
    }

    if(size != size1){
        printf("length is same \n");
    }else{
        printf("length is not same \n");
    }


}