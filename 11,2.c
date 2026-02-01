#include<stdio.h>

void main(){

    int size;
    printf("Enter number of elements in array \n");
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];

    for(int x = 0; x < size;x++){

        printf("Enter %d element of array \n",x);
        scanf("%d",&arr1[x]);

        arr2[x] = arr1[x];

    }
    for(int x = 0;x < size;x++){

        printf("%d\n",arr2[size - x - 1]);
    }
}