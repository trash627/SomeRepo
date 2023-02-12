#include <stdio.h>
#include <string.h>

void main()
{
    char c[] = "bruh";

    int len = strlen(c);
    int size = sizeof(c);

    printf("%s\n", c);
    printf("Length of the string =  %d\n", len);
    printf("Size of the string =  %d\n", size);
}