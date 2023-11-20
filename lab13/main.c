#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100
#define VOWELS (1u << ('a' - 'a') | 1u << ('e' - 'a') | 1u << ('i' - 'a') | 1u << ('o' - 'a') | 1u << ('u' - 'a'))


char* get_input() {
    char buffer[BUFFER_SIZE];
    char* response = NULL;
    int used = 0, size = 0;
    do {
        fgets(buffer, BUFFER_SIZE, stdin);
        if (used + strlen(buffer) + 1 > size) {
            size = used + BUFFER_SIZE;
            response = realloc(response, size);
        }
        strcpy(response + used, buffer);
        used += strlen(buffer);
    } while(buffer[strlen(buffer)-1] != '\n');
    response[used-1] = '\0';
    return response;
}


bool is_letter(char ch) {
    ch = tolower(ch);
    return (ch < 'a' || ch > 'z');
}


unsigned int char_to_set(char ch) {
    ch = tolower(ch); // регистр не учитываем
    if (!is_letter(ch)) {
        return 1u << (ch - 'a');
    }
    return 0;
}

bool is_vowel(char ch) {
    return (char_to_set(ch) | VOWELS) == VOWELS;
}


int main() {
    printf("Введите строку: ");
    char* text = get_input();
    char* word;
    

    word = strtok(text, " \n");
    bool found = false;
    while (word != NULL) {
        if (is_vowel(word[0]) && is_vowel(word[strlen(word)-1])) {
            printf("%s\n", word);
            found = true;
        }
        word = strtok(NULL, " \n");
    }
    if (found) {
        printf("Встречаются слова, начинающиеся и заканчивающиеся гласными.\n");
    } else {
        printf("Не найдено слов, начинающихся и заканчивающихся гласными.\n");
    } 
}