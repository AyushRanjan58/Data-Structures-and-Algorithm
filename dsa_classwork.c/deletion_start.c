#include<stdio.h>
int main(){
int n;
int pos=-1;
printf("enter the length of thr array:");
scanf("%d",&n);
int arr[n];
printf("enter the array:");
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("the array entered is:");
for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);
}
int a;
printf("\nenter the element that has be deleted:");
scanf("%d",&a);
for(int i=0;i<n;i++){
    if(arr[i]==a){
         pos= i;
        break;
    }
}
 if(pos == -1) {
        printf("Value %d not found in array.\n", a);
    } else {
        // Shift elements left
        for(int i = pos; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--; 
printf("the new array is:");
for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}
}