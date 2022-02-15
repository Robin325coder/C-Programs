/*
* Modifying word count program from K&R
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int nw = 0;

    int c;
    int state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }

        /*
        if ((c != ' ' && c != '\n' && c != '\t') && (state == OUT)) {
            state = IN;
            ++nw;
        } else if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        */
    }

    printf("\n%d\n", nw);

    return 0;
}

