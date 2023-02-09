/*A Recursive function is said to be Non-Tail recursive if the recursive call is not
 the Last thing done by the function.After returning back 
 there is something left to evaluate */
 int fun(int n)
 {
    if(n==1)
        return 0;
    else
        return 1 + fun(n/2);
 }
 int main()
 {
    printf("%d",fun(8));//Output:3
    return 0;
 }
