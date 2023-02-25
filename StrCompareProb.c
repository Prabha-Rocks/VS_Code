//Find output of following code
#include <stdio.h>
#include <string.h>
int main()
{
    char *fruits[]={"2 Oranges","2 Apples","3 Bananas","1 Pineapple"};
    if(strcmp(fruits[1],fruits[2])<0)
        printf("%s are less than %s",fruits[1],fruits[2]);
    else if (strcmp(fruits[1],fruits[2])>0)
        printf("%s are greater than %s",fruits[1],fruits[2]);
    return 0;
}//Output: 2 Apples are less than 3 Bananas
/*The code declares an array of pointers to strings named "fruits" 
and initializes it with four strings. Each string represents a 
fruit and the quantity of that fruit.

The if-else statement compares the second and third elements of the "fruits"
 array using the "strcmp" function. If the second element is less than the 
 third element, the program prints "%s are less than %s" with the second and
  third elements as the placeholders for the strings to be printed. Otherwise, 
  if the second element is greater than the third element, the program prints 
  "%s are greater than %s" with the 
  second and third elements as the placeholders.

In this case, "2 Apples" is indeed less than "3 Bananas," so the output is 
"2 Apples are less than 3 Bananas."
*/