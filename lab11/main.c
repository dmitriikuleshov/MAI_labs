#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef enum _kState
{
    READ_NONSPACE = 0,
    READ_SPACE
} kState;


int main() {
    kState state = READ_NONSPACE;
    int key = 3;
    int ch;
    while ((ch = getchar()) != '\n') {
        switch (state) {
            case READ_NONSPACE:
            {
                if (isspace(ch)) {
                    state = READ_SPACE;
                } else {
                    if (isalpha(ch)) {
                        char offset = isupper(ch) ? 'A' : 'a';
                        printf("%c", ((ch - offset - key + 26) % 26) + offset);
                    } else {
                        printf("%c", ch);
                    }
                }
            } break;

            case READ_SPACE:
            {
                printf("%c", ' ');
                if (!isspace(ch)) {
                    ++key;
                    if (isalpha(ch)) {
                        char offset = isupper(ch) ? 'A' : 'a';
                        printf("%c", ((ch - offset - key + 26) % 26) + offset);
                    } else {
                        printf("%c", ch);
                    }
                    state = READ_NONSPACE;
                }
            } break;
        }
    }
}
