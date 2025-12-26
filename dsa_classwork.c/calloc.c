#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n;
    printf("enter the length of the array:");
    scanf("%d",&n);
    arr = (int*)calloc(n,sizeof(int));//not like in malloc where we have to update the n boxes values mannual 
    //the calloc well by defalut creates n boxes which have 0 in them

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}