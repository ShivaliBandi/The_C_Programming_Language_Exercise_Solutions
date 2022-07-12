#include<stdio.h>
int main()
{
    //Run this program and for EOF press cntrl+D so that it will print further lines of code it wont terminate entire code
   
    char ch='\0';
    while((ch=getchar())!=EOF)
    {
      if(ch=='\t')
      {
        putchar('\\');
        putchar('t');
      }
      else if(ch=='\b')
      {
        putchar('\\');
        putchar('b');
      }
        else  if(ch=='\\')
      {
        putchar('\\');
        putchar('\\');
      }
      else
        putchar(ch);
    
    }
    return 0;
}