#include <stdio.h>

main()
{
    int c;
    while((c = getchar()) != EOF) {
        if(c == ' ')
        {
            putchar(c);
            while(c == ' '){
                c = getchar();
            }
        }
        putchar(c);
    }
}
