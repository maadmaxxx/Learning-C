/* armstrong number- example 371
order=3
formed by adding number multiplied by itself order number of times
3*3*3 + 7*7*7 + 1*1*1 =371 */
# include <stdio.h>
int main()
{
    int number,count=0,result=0,rem,mul=1,cnt;
    printf("Enter the number:");
    scanf("%d",&number);
    int q=number;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    cnt=count;
    q=number;
    while(q!=0)
    {
        rem=q%10;
        while(cnt!=0)
        {
        mul=rem*mul;
        cnt--;
        }
    result=result+mul;
    cnt=count;
    q=q/10;
    mul=1;
    }
if (result  ==  number)
printf("%d is a Armstrong number",number);
else
printf("%d is not a Armstrong number",number);
return 0;
}