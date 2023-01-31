/* Armstrong Number: An Armstrong number is a number of order n in which each digit
 when multiplied by itself n number of times and 
 finally added together,results the same number
 Example: 371= 3*3*3 + 7*7*7 + 1*1*1 */
 /* 3Step idea to find armstrong number: 1)Number of digits in that no. or order of digit
 2)Multiply each digit n number of times(with itself) and add them
 3) Check whether obtained digit is actual result or not */
#include<stdio.h>
int main()
{
    int mul=1,result=0,cnt,count=0,num,rem,q;
    printf("Enter a number:");
    scanf("%d",&num);
    q=num;
    //Loop to check the number of digits in the number
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    cnt=count;
    q=num;
    while(q!=0)
    {
        rem=q%10;
        //Loop to Multiply each digit n number of times with itself and add them
        while(cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
    result=result+mul;//to get total result
    cnt=count;
    q=q/10;
    mul=1;
    }
//Condition checking whether Armstrong number or not
if(result==num)
printf("It is an Armstrong number");
else
printf("It is not an Armstrong number");
return 0;
}