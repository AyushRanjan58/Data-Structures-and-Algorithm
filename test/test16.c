#include<stdio.h>

int search(int n,int arr[]){
    for(int i = 0;i<n;i++){
        if(arr[i]<arr[i+1]){
           scanf("%d",&arr[i]);
        }
    printf("\nthe elments of the array is: %d",arr[i]);
    }
    return 1;
}

int main(){
   int n;
   printf("enter the length of the array:");
   scanf("%d",&n);
   int arr[n];
   printf("entered the elements of array: ");

   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }

   printf("the array is: ");
   for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);
   }
   int arrange = search(n,arr);
 
   return 0;

}