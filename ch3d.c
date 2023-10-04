#include<stdio.h>
int main()
{
    int y,a,b,l,r,t,s;
    a=1900;
    printf("Enter year: ");
    scanf("%d",&y);
    // Total years between entered year and basic year
    b = (y-1)-a;
    // Leap year in gap year
    l = b/4;
    // Remaining non leap year
    r = b-l;

    

    // Total days
    t = (l*366)+(r*365)+1;
    s = t%7;
    if(s==0)
    printf("Monday");
    else if (s==1)
    printf("Tuesday");
    else if (s==2)
    printf("Wednesday");
    else if(s==3)
    printf("Thrusday");
    else if(s==4)
    printf("Friday");
    else if (s==5)
    printf("Saturday");
    else if (s==6)
    printf("Sunday");
    else 
    printf("You have done something wrong.");
    return 0;
}