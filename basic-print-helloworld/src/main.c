#include <stdio.h>

int main()
{
    FILE *fptr;
    char ch;

    fptr = fopen("file.txt", "r");

    if (NULL == fptr) {
        printf("File not found\n");
        return 1;
    }

    printf("content of this file are \n");

    do {
        ch = fgetc(fptr);
        printf("%c", ch);
    } while (ch != EOF);

    fclose(fptr);
    getchar();
    return 0;
}

