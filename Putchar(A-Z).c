/*putchar() accepts an integer argument an integer representation of
 character written on screen
 prototype:int putchar(int ch)*/
 #include <stdio.h>
 int main()
 {
    int ch;
    for(ch='A'; ch <= 'Z'; ch++){
        printf("\n");
        putchar(ch);//Output: A-Z printing in diff lines
    }
    return 0;
 }
