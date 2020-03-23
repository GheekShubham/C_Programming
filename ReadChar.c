/*******************************************************
**** READ CHARCHTER FROM FILE AND DISPLAY ON SCREEN ****
**** IN LINUX, COMMANDS TO EXECUTE:                 ****
**** gcc ReadChar.c                                 ****
**** ./a.out < file.txt                             ****
*******************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    while((ch=getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}
