#include <stdio.h>

int main(void)
{
    int N, numcnt=0, smallcnt=0;
    int maxnum=0, maxsmall=0;
    char ch;
    
    scanf("%d\n", &N);
    
    for(int i=0; i<N; i++) {
        scanf("%c", &ch);
        
        if (ch>='0'&&ch<='9') {
            if (smallcnt>0) smallcnt = 0;
            numcnt ++;
            if (numcnt>maxnum) maxnum = numcnt;
        }
        
        if (ch>='a'&&ch<='z') {
            if (numcnt>0) numcnt = 0;
            smallcnt++;
            if (smallcnt>maxsmall) maxsmall = smallcnt;
        }
    }
    printf("%d\n%d", maxsmall, maxnum);
    return 0;
}
