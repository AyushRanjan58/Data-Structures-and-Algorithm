#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements of the array:");
    for(int i = 0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    printf("the duplicat element is:");
    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j]){
                 printf("%d",arr[j]);
                 break;
             }
         } 
     }
    return 0;
}