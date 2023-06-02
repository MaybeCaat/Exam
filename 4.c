#include <stdio.h>

void changeDigits(char str[]) {
    char* ptr = str;
    while (*ptr) {
        int number = *ptr - '0';
        *ptr = number + 1 + '0';
        ptr++;
    }
}

int main() {
    char str[] = "12";
    changeDigits(str);
    puts(str);
    return 0;
}