#include<stdio.h>
int main(){
    int n;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("array you have entered:");

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int a;
    printf("enter the number that has be added:");
    scanf("%d",&a);
    arr[-1]=a;
    for(int i = -1;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}