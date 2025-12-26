#include<stdio.h>
void solve(int count,char source,char helper,char destination){
        if(count==1){
            printf("move the disk from pole %c to ploe %c\n",source,destination);
            return;
        }
       
        solve(count-1,source,helper,destination);
        printf("Move disk %d from pole %c to pole %c\n", count, source, destination);
        solve(count-1,helper,destination,source);
}

int main(){
    int n = 3;
    solve(n,'A','B','C');
    return 0;
}