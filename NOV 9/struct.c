#include<stdio.h>
struct student{
    int reg;
    float marks;
};
int main()
{
    struct student s;
    s.reg=18;
    s.marks=81;
    printf("%d \n",s.reg);
    printf("%f",s.marks);
}