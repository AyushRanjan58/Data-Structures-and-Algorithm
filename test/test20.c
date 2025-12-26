#include<stdio.h>
int main(){
    printf("enter the length of the array:");
    int n;
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements of the array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("the entered elements are:");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int arr1[n]; 
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i]>arr[j]){
               arr1[i]=arr1[j];
            }
            else{
                arr1[j]=arr1[i];
            }
        }
    }

    printf("\nthe ordered array is:");
    for(int i = 0;i<n;i++){
        printf("%d\n",arr1[i]);
    }
    return 0;
}