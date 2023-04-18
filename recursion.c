#include<stdio.h>
int fun(int n)  //2. put n=3 since it is not equal to 1 we go to else and there again fun deff is applied
{
    if(n==1)
    return 1;
    else
    return 1 + fun(n-1);
}
int main()
{
    int n=3;
    printf("%d", fun(n));    //1. call function then go to function definition
    return 0;
}