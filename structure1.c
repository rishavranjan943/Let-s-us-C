// house no.,block,city,state of 5 people
#include<stdio.h>
#include<string.h>
struct info{
    int houseno;
    char  block;
    char city[100];
    char state[100];
};
int main()
{
    struct info p1 = {12,'A',"Patna","Bihar"};
    struct info p2 = {13,'B',"Kolkata","West bengal"};
    struct info  p3 = {19,'E',"Gaya","Bihar"};
    printf("%d %c %s %s",p1.houseno,p1.block,p1.city,p1.state);
    return 0;
}