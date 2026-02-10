#include <stdio.h>


int main(void)
{
    /*
char name[50];
// Output text
printf("Hello World!\n");
// Keyboard input
printf("Enter your name: ");
scanf("%s", name);
// Display text
printf("Hello, %s!\n", name);
return 0;
}
*/

int x = 10;
int y = x++ + ++x;
printf("%d", y);
}