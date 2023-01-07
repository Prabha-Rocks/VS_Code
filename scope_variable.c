#include<stdio.h>
int func();
int var = 20;
int main(){
    int var = 24;
    printf("%d \n",var);
    func();
    return 0;
}
int func(){
    printf("%d",var);
}