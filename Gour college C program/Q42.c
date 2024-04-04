#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *src, *dest;
    int ch;

    // Open the source file in read mode and destination file in write mode
    src = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");

    if (src == NULL || dest == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the content from the source file and write to the destination file
    while ((ch = fgetc(src)) != EOF) {
        if (islower(ch))
            fputc(toupper(ch), dest);
        else if (isupper(ch))
            fputc(tolower(ch), dest);
        else
            fputc(ch, dest);
    }

    // Close the files
    fclose(src);
    fclose(dest);

    printf("Contents copied and case inverted successfully from source.txt to destination.txt.\n");
    return 0;
}