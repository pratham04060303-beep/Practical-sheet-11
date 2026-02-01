#include<stdio.h>

void main(){
    int size;
    printf("Enter number of elements in array 1 \n");
    scanf("%d",&size);
    int arr[size];
    int temp[size];

    for(int x = 0; x < size;x++ ){
        printf("Enter %d element of array 1 \n",x);
        scanf("%d",&temp[x]);
    }
    

    printf("_______________\n\n");

    int size1;
    printf("Enter number of elements in array 2 \n");
    scanf("%d",&size1);
    int arr1[size1];
    int temp1[size1];
     for(int x = 0; x < size1;x++ ){
            printf("Enter %d element of array 2 \n",x);
            scanf("%d",&temp1[x]);
        }
    if(size == size1){
        
        for(int x = 0; x < size;x++){
            arr[x] = temp1[x];
            arr1[x] = temp[x];
        }
        printf("array 1 : ");
        for(int x = 0;x < size;x++){

            printf("%d|",arr[x]);

        }

        printf("\n");

        printf("array 2 : ");
        for(int x = 0;x < size1;x++){

            printf("%d|",arr1[x]);

        }

         
    }else{
        printf("sizes are not equal \n");
    }

    

     
}