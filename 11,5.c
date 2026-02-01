#include<stdio.h>

void main(){

    int size;
    int size1;
    printf("Enter number of elements in array 1 \n");
    scanf("%d",&size);
    int arr[size];
    int temp = 0;


    for(int x = 0; x < size;x++){
        printf("Enter %d element of array 1 \n",x);
        scanf("%d",&arr[x]);
    }
    
    printf("Enter number of elements in array 2 \n");
    scanf("%d",&size1);
    int arr1[size1];

    for(int x = 0; x < size1;x++){
        printf("Enter %d element of array 2 \n",x);
        scanf("%d",&arr1[x]);
    }
    
if(size > size1){
    for(int x = 0;x < size;x++){
            int count = 0;
            for(int y = 0;y < size1;y++){

                if(arr[x] == arr1[y]){
                    count += 1;
                    temp +=1;
                }else{}

                
                }
                 if(count < 1){
                    printf("elements of arrays are not equal ");
                    break;
                }


    }
    if(temp > size){
        printf("elements in both arrays are same ");
    }
}else{
    for(int x = 0;x < size1;x++){
            int count = 0;
            for(int y = 0;y < size;y++){

                if(arr1[x] == arr[y]){
                    count += 1;
                    temp +=1;
                }else{}

                
                }
                 if(count < 1){
                    printf("elements of arrays are not equal ");       
                    break;
                }


    }
    if(temp > size){
        printf("elements in both arrays are same ");
    }

}

}