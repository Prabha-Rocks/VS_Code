//Find Output of following code
void count(int n)
{
    static int d=1;//static int variable does not retain its value
    printf("%d ",n);
    printf("%d ",d);
    d++;
    if(n>1)
    count(n-1);
    printf("%d ",d);
    //Output:3 1 2 2 1 3 4 4 4
}
int main()
{
    count(3);
    return 0;
}