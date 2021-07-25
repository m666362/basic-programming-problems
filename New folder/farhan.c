#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(101>a && a>79)
    {
        printf("A+");
    }

    else if(80>a && a>69)
    {
        printf("A");
    }
    else if(70>a && a>59)
    {
        printf("A-");
    }
    else if(60>a && a>49)
    {
        printf("b");
    }
    else if(50>a && a>39)
    {
        printf("c");
    }
    else if(40>a && a>32)
    {
        printf("d");
    }
    else if(33>a && a>-1)
    {
        printf("f");
    }
    return 0;
}
