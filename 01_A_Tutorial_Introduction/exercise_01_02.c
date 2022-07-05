#include<stdio.h>
int main(int argc,char **argv)
{

    printf("HELLO WORLD\c");
    /*
    After compiling this code there is an error:
    exersice_01_02.c: In function ‘main’:
    exersice_01_02.c:5:12: warning: unknown escape sequence: '\c'
    5 |     printf("HELLO WORLD\c");
      |            ^~~~~~~~~~~~~~~
    */
    return 0;
}