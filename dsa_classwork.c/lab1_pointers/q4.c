// Write a program that takes an array of integers as input, doubles the values of each element using a function that accepts a pointer to the 
// array, and then displays the modified array. 
// #include<stdio.h>

// void element(int n,int arr[n]){
//     int *ptr;
//     for(int i = 0;i<n;i++){
//         ptr = &arr[i];
//         int a = 2*(*ptr);
//         scanf("%d",&arr[a]);
//     }

//     printf("the updated value of array is:");
//     for(int i = 0;i<n;i++){
//         printf("%d",arr[a]);
//     }
// }

// int main(){
//     int n;
//     printf("enter the length of the array: ");
//     scanf("%d",&n);
//     int arr[n];
    
//     printf("enter the elements of the array: ");
//     for(int i = 0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("elements of the array: ");
//     for(int i = 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }

//     element(n,arr);

//     return 0;
// }
#include<stdio.h>

void element(int n, int arr[]) {
    int *ptr;
    for(int i = 0; i < n; i++) {
        ptr = &arr[i];        // pointer points to each element
        *ptr = 2 * (*ptr);    // double the value at that address
    }

    printf("The updated values of the array are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original elements of the array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    element(n, arr);  // ✅ pass array correctly
    
    return 0;
}
