#include <stdio.h>
#include <string.h>

int main() {
    int flag1 = 0, flag2 = 0;
    char user_name[] = "Aditya";
    char user_password[] = "Aditya@7113";
    char user_name1[20];
    char user_password1[20];

    printf("Enter Username :--> ");
    fgets(user_name1, sizeof(user_name1), stdin);
    // Remove trailing newline character
    user_name1[strcspn(user_name1, "\n")] = '\0';

    printf("Enter Password :--> ");
    fgets(user_password1, sizeof(user_password1), stdin);
    // Remove trailing newline character
    user_password1[strcspn(user_password1, "\n")] = '\0';

    if ((strcmp(user_name, user_name1) == 0) && (strcmp(user_password, user_password1) == 0)) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }
    return 0;
}
