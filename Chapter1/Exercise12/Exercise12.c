#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

main() {
    int c, state;
    state = OUT;

    while((c = getchar()) != EOF) {
        if(state == IN) {
            if(c == ' ') {
                state = OUT;
                putchar('\n');
            }
            else {
                putchar(c);
            }

        }
        else {
            if(c != ' ') {
                state = IN;
                putchar(c);
            }

        }
    }
}