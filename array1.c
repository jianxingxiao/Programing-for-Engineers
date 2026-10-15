#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,b;
    int sum = 0;
    printf("Please enter the number of digits you wish to input:") ;
    scanf("%d",&n);
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL){
        printf("memory allocation failure");
        return 1;
    }
    for(int i = 0; i < n; i++){
        printf("Enter %d number: ",i +1);
        scanf("%d",&b);
        arr[i] = b;
    }
    int *arr1 = (int*) malloc(n * sizeof(int));
    if (arr1 == NULL){
        printf("memory allocation failure");
        return 1;
    }
    for(int i = 0; i < n;i++){
        
        if(arr[i] % 2 == 0 && sum <= 10){
            arr1 [i] = arr [i];         
            sum +=arr1[i];

            printf("even number a is %d\n",arr1[i]);
        } 
        
    }
    
}