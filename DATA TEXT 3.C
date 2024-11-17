#include <stdio.h>
#include <string.h>

void append_sentence_to_file() {
    char sentence[101];

    printf("Enter a sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

   
    size_t length = strlen(sentence);
    if (length > 0 && sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
    }

   
    if (strlen(sentence) <= 100) {
        FILE *file = fopen("data.text", "a");
        if (file != NULL) {
            fprintf(file, "%s\n", sentence);
            fclose(file);
            printf("Sentence appended to data.text.\n");
        } else {
            printf("Error: Unable to open file.\n");
        }
    } else {
        printf("The sentence is too long. Please enter up to 100 characters.\n");
    }
}

void display_file_content() {
    FILE *file = fopen("data.text", "r");
    char ch;

    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("Content of data.text:\n");
    while ((ch = fgetc(file)) != EOF) { 
        putchar(ch);
    }

    fclose(file);
}

int main() {
    append_sentence_to_file();
    display_file_content();
}
