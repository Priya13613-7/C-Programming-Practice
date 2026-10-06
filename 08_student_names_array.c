#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50], search[50];
    int i, longest = 0, shortest = 0, found = 0;

    printf("Enter 5 student names:\n");
    for (i = 0; i < 5; i++)
        scanf("%49s", names[i]);

    for (i = 1; i < 5; i++) {
        if (strlen(names[i]) > strlen(names[longest])) longest = i;
        if (strlen(names[i]) < strlen(names[shortest])) shortest = i;
    }

    printf("\nStudent names:\n");
    for (i = 0; i < 5; i++) printf("%s\n", names[i]);

    printf("\nLongest name = %s\n", names[longest]);
    printf("Shortest name = %s\n", names[shortest]);

    printf("\nEnter a name to search: ");
    scanf("%49s", search);

    for (i = 0; i < 5; i++) {
        if (strcmp(names[i], search) == 0) {
            found = 1;
            break;
        }
    }

    if (found) printf("%s is found.\n", search);
    else printf("%s is not found.\n", search);

    return 0;
}
