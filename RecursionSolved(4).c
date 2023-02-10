//Find the return value of fun(5)
int fun(int n)
{
    int x=1,k;
    if(n==1)
    return x;
    for(k=1;k<n;++k)
        x=x+fun(k)*fun(n-k);
    return x;
}
int main()
{
    fun(5);
    printf("%d ",fun(5));//Output:51
    //fun(5)=1+2*[fun(4)+fun(2)*fun(3)]
}