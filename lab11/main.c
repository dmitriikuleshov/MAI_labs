#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 100


char* get_input() {
    char buffer[BUFFER_SIZE];
    char* response = NULL;
    int used = 0, size = 0;
    do {
        // Get some text from the user
        fgets(buffer, BUFFER_SIZE, stdin);
        // Reallocate memory, if required
        if (used + strlen(buffer) + 1 > size) {
            size = used + BUFFER_SIZE;
            response = realloc(response, size);
        }
        // Append buffer to the response
        strcpy(response + used, buffer);
        used += strlen(buffer);
    } while(buffer[strlen(buffer)-1] != '\n');
    // Trim the trailing new line
    response[used-1] = '\0';
    return response;
}


// Function to encode a string with Caesar
char* encode_text(char* text) {
    char* result = malloc(sizeof(char) * strlen(text));
    size_t key = 3;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        if (text[i] == ' ') {
            ++key;
            while (text[i] == ' ') {
                result[i] = ' ';
                ++i;
            }
        }
        char ch = text[i];
        if (isalpha(ch)) {
            char offset = isupper(ch) ? 'A' : 'a';
            result[i] = (ch - offset + key) % 26 + offset;
        } else {
            result[i] = text[i];
        }
    }
    result[i] = '\0';
    return result;
}


// Function to decode a string encoded with Caesar
char* decode_text(char* text) {
    char* result = malloc(sizeof(char) * strlen(text));
    size_t key = 3;
    for (size_t i = 0; text[i] != '\0'; ++i) {
        if (text[i] == ' ') {
            ++key;
            while (text[i] == ' ') {
                result[i] = ' ';
                ++i;
            }
        }
        char ch = text[i];
        if (isalpha(ch)) {
            char offset = isupper(ch) ? 'A' : 'a';
            result[i] = (ch - offset - key + 26) % 26 + offset;
        } else {
            result[i] = text[i];
        }
    }
    result[i] = '\0';
    return result;
}


int main() {
    printf("%s", "Enter some text: ");
    char* text = get_input();
    char* encoded_text = encode_text(text);
    char* decoded_text = decode_text(encoded_text);
    printf("You entered: %s\n", text);
    printf("Encoded text: %s\n", encoded_text);
    printf("Decoded text: %s\n", decoded_text);
    free(text);
    free(encoded_text);
    free(decoded_text);
    return 0;
}
