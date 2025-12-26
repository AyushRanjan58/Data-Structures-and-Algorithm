#include<stdio.h>
void ayush(int p[]){
    int temp = p[0];
    p[0]=p[1];
    p[1] = temp;
    return;
}

int main(){
   int arr[5]= {1,2,3,4,5};
   printf("%d %d\n",arr[0],arr[1]);
   ayush(arr);
   printf("%d %d\n",arr[0],arr[1]);
   return 0;
}