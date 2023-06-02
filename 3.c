#include <stdio.h>

int main() {
    int prev, curr, count = 0;
    scanf("%d", &prev);
    while (prev != 0) {
        scanf("%d", &curr);
        if (curr != 0 && curr / prev == 2) count++;
        prev = curr;
    }
    printf("%d", count);
}