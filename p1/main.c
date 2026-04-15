#include <stdio.h>

int main(void)
{
    int answer, user, times =0;
    
    scanf("%d", &answer);
    
    do {
        scanf("%d", &user);
        times ++;
        if (user<answer) {
            printf("%d<?\n", user);
        }
        else if (user>answer) {
            printf("%d>?\n", user);
        }
        else {
            printf("%d==?\n", user);
        }
    }while(user!=answer);
    
    printf("%d", times);

    return 0;
}
