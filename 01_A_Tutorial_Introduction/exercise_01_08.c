#include<stdio.h>
int main()
{
    //Run this program and for EOF press cntrl+D so that it will print further lines of code it wont terminate entire code
    int blankCnt=0,tabCnt=0,newlineCnt=0;
    char ch='\0';
    while((ch=getchar())!=EOF)
    {
        if(ch==' ')
            blankCnt++;
        else if(ch=='\t')
            tabCnt++;
        else if(ch=='\n')
            newlineCnt++;
        else
            continue;
    }
    printf("BlankSpace=%d\tTab=%d\tNewLine=%d",blankCnt,tabCnt,newlineCnt);
    return 0;
}