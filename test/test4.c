#include<stdio.h>
int main(){
    int n;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];

    printf("enter the elements of the array:");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("the elements of the array:");
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }

    for(int i=0;i<n;i++){
       for(int j =0;j<n;j++){
        if(arr[i]<arr1[j]){
            arr1.insert(i,j);
        else{
            arr1.append(arr1[j]);
        }
        }
       } 
    }
    printf("the array is:");
    for(int i=0;i<n;i++){
        printf("%d",arr1[i])
    }
    return 0;
}