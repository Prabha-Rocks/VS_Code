/*Tail Recursion: A Recursive function is said to be Tail Recursive if the recursive
 calls is the last thing to do by the function. There is no need to keep record 
 of the previous state.
 Tail Recursive function does not utilise Stack properly*/
 void fun(int n)
 {
    if(n==0)
        return;
    else
        printf("%d ",n);//Output: 3 2 1
    return fun(n-1);//recursive call
 }
int main()
{
    fun(3);
    return 0;
}