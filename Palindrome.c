/*Palindrome is a number which if read backwards
 gives the same number as being read forward, Eg:121, 535 
 Idea: We need to reverse the number and if the reverse number is 
 equal to the actual number we say that its a Palindrome number*/

 //WAP take a Number from user and check if its a Palindrome or not
 #include <stdio.h>
 int main()
 {
    int n,rem,result=0,q;
    printf("Enter a Number: ");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        result=result*10+rem;//This logic helps us to reverse the number
        q=q/10;
    }
    if(result==n)
        printf("Number is a Palindrome");
    else
        printf("Number is not a Palindrome");
    return 0;
}