#include <stdio.h>

void display_file_content() {
    FILE *file = fopen("data.text", "r"); // Open file in read mode
    char ch;

    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return;
    }

    printf("Content of data.text:\n");
    while ((ch = fgetc(file)) != EOF) { // Read each character until end of file
        putchar(ch); // Print each character to the screen
    }

    fclose(file); // Close the file after reading
}

int main() {
    display_file_content();
    return 0;
}
