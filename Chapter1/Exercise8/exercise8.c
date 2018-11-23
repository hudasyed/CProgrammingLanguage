#include <stdio.h>

main()
{
    int c, nb, nt, nn;

    nb = nt = nn = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if(c == '\t')
            ++nt;
        else if(c == '\n')
            ++nn;
    }
    printf("blanks:%d, tabs:%d, newlines:%d\n", nb, nt, nn);
    return 0;
}
