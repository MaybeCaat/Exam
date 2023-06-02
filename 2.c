#include <stdio.h>
#include <math.h>

int sumFoo(int n) {
    int result = 0;
    for (int i=1; i<=n; i++) {
        result += (int) pow(i, 4);
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumFoo(n));
    return 0;
}
