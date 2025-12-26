#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n;
    printf("enter the length of the array:");
    scanf("%d",&n);
    arr = malloc(n*sizeof(int));// in c++ we write it like (int*)malloc(n*sizeof(int))
    // this well made memory in the arr 
    //this well create n boxes where are random values are stored and we have to update them mannual

    // for(int i = 0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}