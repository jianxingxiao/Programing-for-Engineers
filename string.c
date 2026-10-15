#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[100], str2[100], str3[100];
    int a,b;
    printf("Please enter the first string:");
    //后续需改为 fgets(str1, sizeof(str1), stdin); // Use fgets instead of gets for safety
    gets(str1);
    printf("Do you need to copy string 1? (yes/no): ");
    gets(str3);
    if (strcmp(str3, "yes") == 0) {
        strcpy(str2, str1);
        a = strlen(str1);
        b = strlen(str2);
        printf("String 1 is: %s\n", str1);
        printf("String 1 copied to String 2: %s\n", str2);
        printf("Length of String 1: %d\n", a);
        printf("Length of String 2: %d\n", b);
    } else {
        printf("Please enter the second string:");
        //后续需改为 fgets(str2, sizeof(str2), stdin); // Use fgets instead of gets for safety
        gets(str2);
        a = strlen(str1);
        b = strlen(str2);
        printf("String 1 is: %s\n", str1);
        printf("String 2 is: %s\n", str2);
        printf("Length of String 1: %d\n", a);
        printf("Length of String 2: %d\n", b);
    }
    return 0;
}