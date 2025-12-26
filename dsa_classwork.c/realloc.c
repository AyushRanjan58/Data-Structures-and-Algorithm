#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n;
    printf("enter the length of the array: ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    
    printf("the array is:");
    for(int i = 0;i<n;i++){
        arr[i]=i+1;
        printf("%d ",arr[i]);
    }
    
    int m;
    printf("\nenter the new array length:");
    scanf("%d",&m);
    arr = (int*)realloc(arr,m*sizeof(int));
    for(int i = n;i<m;i++){
        arr[i] = i+1;
    }
    
    printf("the array is:");
    for(int i = 0;i<m;i++){
        printf("%d ",arr[i]);
    }

    free(arr);
    return 0;

}