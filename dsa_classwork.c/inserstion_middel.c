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
    int b;
    printf("enter the index where you want to add:");
    scanf("%d",&b);
    int a;
    printf("enter the number that has be added:");
    scanf("%d",&a);
    
    for(int i=n;i>b;i--){
        arr[i]=arr[i-1];
    }
    arr[b] = a;
    n++;
     for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}