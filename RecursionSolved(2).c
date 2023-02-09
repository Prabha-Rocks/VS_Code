/* Determine how many number of times '*' will be printed on screen.
Answer: n(n+1)/2 which is sum of n natural numbers*/
void fun1( n)
{
    int i=0;
    if(n>1)
        fun1(n-1);
    for(i=0; i<n; i++)
        printf("*");        
}
void main()
{
    int n;
    printf("Enter value for n: ");
    scanf("%d", &n);
    fun1(n);
}