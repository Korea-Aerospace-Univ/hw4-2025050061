#include <stdio.h>

int main(void)
{
    int N, numcnt=0, smallcnt=0;
    int maxnum=0, maxsmall=0;
    char ch;
    bool is_num = false, is_small = false;
    bool is_in_num = false, is_in_small = false;
    
    scanf("%d\n", &N);
    
    for(int i=0; i<N; i++) {
        scanf("%c", &ch);
        
        is_num = (ch>='0'&&ch<='9');
        is_small = (ch>='a'&&ch<='z');
        
        if (is_num) {
            if (!is_in_num) {
                is_in_num = true;
                is_in_small = false;
                numcnt = 1;
            }
            else numcnt ++;
            
            if (numcnt>maxnum) maxnum = numcnt;
        }
        
        if (is_small) {
            if (!is_in_small) {
                is_in_small = true;
                is_in_num = false;
                smallcnt = 1;
            }
            else smallcnt++;
            
            if (smallcnt>maxsmall) maxsmall = smallcnt;
        }
    }
    
    printf("%d\n%d", maxsmall, maxnum);
    return 0;
}
