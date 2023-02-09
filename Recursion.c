//Recursion is a process in which a function calls itself directly or indirectly
// Using Stack we can easily simulate the values of recursion
//WAP to demonstrate recursion
int fun(int n)
{
    if(n==1)
        return 1;//Return means we are popping activation record of function stack 
    else
        return 1 + fun(n-1);// fun(n-1) is a recursive call of fun(int n)
}
int main()
{
    int n=3;
    printf("%d",fun(n));// Output: 3
    return 0;
}