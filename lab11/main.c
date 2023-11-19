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
    char filename[100];
    printf("Введите имя файла: ");
    scanf("%s", filename);
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }
    kState state = READ_NONSPACE;
    int key = 3;
    int ch;
    int prev_space_ch = ' ';
    while ((ch = fgetc(file)) != EOF) {
        switch (state) {
            case READ_NONSPACE:
            {
                if (!isalnum(ch)) {
                    prev_space_ch = ch;
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
                printf("%c", prev_space_ch);
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
    return 0;
}
