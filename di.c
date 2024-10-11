#include <stdio.h>

int my_strlen(char str[])
{
    int length = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main(){

char input[256];
char emoji[5] = "😂";

/*
printf("Enter a string: ");

fgets(input, 256 , stdin);

printf("%d\n", my_strlen(input));
*/

// gcc -o di di.c -g //runs debugger
// gdb di
// b
// run
// layout src
// n for next
// explicitly enter a function: s (for step)
// p (for print) // p/t emoji (prints the binary codepoints)
// c (continue until you hit the next breakpoint)

printf("%s\n", emoji);
}