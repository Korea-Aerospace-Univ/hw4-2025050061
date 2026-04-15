#include <stdio.h>

int main(void)
{
    int answer, user, times =0;
    bool is_correct = false;
    
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
            printf("%d==\n", user);
            is_correct = true;
        }
    }while(!is_correct);
    
    printf("%d", times);

    return 0;
}
