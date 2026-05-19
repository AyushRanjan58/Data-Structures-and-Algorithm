#include<stdio.h>
int main(){
   int n;
   printf("enter the length of the array:");
   scanf("%d",&n);
   int arr[n];
   printf("enter the elements of the array:");
   for (int i = 0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   printf("the array is:");
   for(int i = 0;i<n;i++){
       printf("%d ",arr[i]);
   }

   int max = arr[0];
   for (int i = 1;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
                }    
        }
    printf("\nthe maximum element is:%d",max);
   return 0;
}