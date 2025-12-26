#include<stdio.h>
#include<string.h>
struct student_demo{
    int roll;
    char name[20];
    float marks;
};

int main(){
    struct student_demo s1;
    s1.roll = 1;
    strcpy(s1.name,"ayush");
    s1.marks = 30;

    printf("%d\n",s1.roll);
    printf("%s\n",s1.name);
    printf("%.2f\n",s1.marks);

    return 0;

}