#include <stdio.h>
#include <stdlib.h>

void createFile() {
    FILE *file;
    char fileName[100];

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    file = fopen(fileName, "w");

    if (file == NULL) {
        printf("Error creating file.\n");
        return;
    }

    printf("File created successfully.\n");

    fclose(file);
}

void writeFile() {
    FILE *file;
    char fileName[100];
    char content[1000];

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    file = fopen(fileName, "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter the content to write (max 1000 characters):\n");
    scanf(" %[^\n]", content);

    fprintf(file, "%s\n", content);
    printf("Content written to the file.\n");

    fclose(file);
}

void readFile() {
    FILE *file;
    char fileName[100];
    char content[1000];

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("File content:\n");

    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }

    fclose(file);
}

void deleteFile() {
    char fileName[100];

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    if (remove(fileName) == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Error deleting file.\n");
    }
}

int main() {
    int choice;

    printf("File Management System\n");

    while (1) {
        printf("\nSelect an option:\n");
        printf("1. Create a File\n");
        printf("2. Write to a File\n");
        printf("3. Read a File\n");
        printf("4. Delete a File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                writeFile();
                break;
            case 3:
                readFile();
                break;
            case 4:
                deleteFile();
                break;
            case 5:
                printf("Thank you for using the file management system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}