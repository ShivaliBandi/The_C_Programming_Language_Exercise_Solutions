#include<stdio.h>
int main()
{
    //Run this program and for EOF press cntrl+D so that it will print further lines of code it wont terminate entire code
   
    char ch='\0',tempCh;
    while((ch=getchar())!=EOF)
    {
      if(ch!=' ' ||  tempCh!=' ')
      {
        putchar(ch);
      }
      tempCh=ch;
    }
    return 0;
}