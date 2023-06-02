#include <stdio.h>
#include <math.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    int disX = abs(start.x - finish.x);
    int disY = abs(start.y - finish.y);
    if (disX <= 1 && disY <= 1) {
        return 1;
    }
    return 0;
}

int main() {
    struct Coord start, finish;
    scanf("%d %d %d %d", &start.x, &start.y, &finish.x, &finish.y);
    printf("%d", canGet(start, finish));
    return 0;
}
