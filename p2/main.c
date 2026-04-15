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
            numcnt++;
            is_in_small = false;
            smallcnt = 0;
            if (is_in_num) {
                if (numcnt > maxnum) {
                    maxnum = numcnt;
                }
            }
            else {
                is_in_num = true;
            }
        }
        
        if (is_small) {
            smallcnt++;
            is_in_num = false;
            numcnt = 0;
            if (is_in_small) {
                if (smallcnt > maxsmall) {
                    maxsmall = smallcnt;
                }
            }
            else {
                is_in_small = true;
            }
        }
    }
    
    printf("%d\n%d", maxsmall, maxnum);
    return 0;
}
