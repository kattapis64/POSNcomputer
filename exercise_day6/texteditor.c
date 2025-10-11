#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    printf("Choose file to create: ");
    scanf("%s", filename);

    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        file = fopen(filename, "w");
        printf("File created: %s\n", filename);
    }
    else {
        printf("File %s already exists.\n", filename);
        fclose(file);
    }

    printf("Enter some text: ");
    while (getchar() != '\n'); // clear leftover newline

    char text[200];
    fgets(text, sizeof(text), stdin);

    file = fopen(filename, "a");
    fprintf(file, "%s", text);
    fclose(file);

    // Editing section
    FILE* temp_file, * orig_file;
    orig_file = fopen(filename, "r");
    temp_file = fopen("temp_file.txt", "w");

    int q, current_line = 0;
    char line[200];

    printf("Enter line number to replace (0 to exit): ");
    scanf("%d", &q);
    while (q != 0) {
        printf("Enter new text: ");
        while (getchar() != '\n');
        fgets(text, sizeof(text), stdin);

        rewind(orig_file);
        current_line = 0;
        while (fgets(line, sizeof(line), orig_file) != NULL) {
            current_line++;
            if (current_line == q)
                fprintf(temp_file, "%s", text);
            else
                fprintf(temp_file, "%s", line);
        }

        fclose(orig_file);
        fclose(temp_file);
        remove(filename);
        rename("temp_file.txt", filename);

        printf("Line replaced successfully.\n");
    }

    return 0;
}
