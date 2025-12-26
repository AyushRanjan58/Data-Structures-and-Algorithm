// #include<stdio.h>
// int binary(int arr[],int n,int key){
//     int low = 0;
//     int high = n-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]==key)
//         return mid;
//         else if(arr[mid]<key){
//             low = mid+1;
//         }
//         else{
//             high = mid-1;
//         } 
//     }
//     return -1;
// }
// int main(){
//     int n = 5;
//     int arr[n];
//     printf("enter the elements of the array:");
//     for(int i = 0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\noriginal array is:");
//     for(int i = 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     int key;
//     printf("\nenter the value to be find:");
//     scanf("%d",&key);
//     int result = binary(arr,n,key);
//     if(result!=-1){
//         printf("\nvalue found at %d index:",result);
//     }
//     else{
//         printf("\nnot found");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={5,4,3,2,1};
//     for(int i = 1;i<5;i++){
//         int j=i;
//         while(j>0&&arr[j]<arr[j-1]){
//             int temp = arr[j];
//             arr[j] = arr[j-1];
//             arr[j-1] = temp;
//             --j;
//         }
//     }

//     printf("the array is:");
//     for(int i = 0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
#include<stdio.h>
#include<string.h>
#define max 100
int stack[max];
int top = -1;
void push(char c){
      stack[++top]=c;
      return;
}
char pop(){
    return stack[top--];
}
int main(){
    char str[] = "ayush";
    int n = strlen(str);
    for(int i = 0;i<n;i++){
        push(str[i]);
    }
    printf("revers of string:\n");
    for(int i = 0;i<n;i++){
        printf("%c",pop());
    }
    return 0;
}