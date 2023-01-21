/*Prime Number is a number greater than 1, if it has more than 
two factors ,i.e 1 and itself, Example:2,3,5,7,11...
Steps to calc Prime number 1)sqrt of number taken , 2)Divide the number by the numbers less
 than or equal to its sqrt ,3)If divisible then NOT PRIME if not then PRIME*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
    int x,a,b,count=0,i;//initially count=0 for prime number
    printf("Enter an Number:");
    scanf("%d",&x);
    //sqrt of number taken
    a=ceil(sqrt(x));//now a contains the sqrt value of number taken
    b=x;//now b contains the the original val of a
    //Loop to divide the number by the nos less than or equal to sqrt
    for(i=2;i<=a;i++)
    {
        if(b%i==0)
        count=1;//count=1 is made when num is divisible(Not Prime)
    }
    //condition checking
    if((count==0 && b!=1)||b==2||b==3)
        printf("The number is Prime");
    else
        printf("The number is not Prime");
return 0;
}