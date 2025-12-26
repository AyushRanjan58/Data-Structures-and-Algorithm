#include<stdio.h>

int linearsecher(int arr[],int n,int key){
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1 ;
}

int main(){
    int n;
    printf("enter the number of elements has to be there:");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements:");

    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
     }   

   int key;
   printf("enter the element that has to be found:");
   scanf("%d",&key);

   int result = linearsecher(arr,n,key);
   if (result==-1)
       printf("element not found");
   else
     printf("element found at index is: %d",result);
 return 0;
}

