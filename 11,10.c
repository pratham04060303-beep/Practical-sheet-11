#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements in array 1 \n");
    scanf("%d",&size);
    int arr[size];
    int sum = 0;

    for(int x = 0; x < size;x++ ){
        printf("Enter %d element of array 1 \n",x);
        scanf("%d",&arr[x]);
        if(x%2 == 0){
            sum += arr[x];
        }


    }

    printf("_______________\n\n");

    int size1;
    printf("Enter number of elements in array 2 \n");
    scanf("%d",&size1);
    int arr1[size1];
    int sum1 = 0;

    for(int x = 0; x < size1;x++ ){
        printf("Enter %d element of array 2 \n",x);
        scanf("%d",&arr1[x]);

        if(x%2 == 1){
            sum1 += arr1[x];

        }
    }

    printf("sum of even indices of first array : %d \n",sum);
    printf("sum of odd indices of second array : %d \n",sum1);
}