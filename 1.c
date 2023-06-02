#include <stdio.h>
#include <math.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    int disX = abs(start.x) - abs(finish.x);
    int disY = abs(start.y) - abs(finish.y);
    if (disX <= 1 && disY <= 1) {
        return 1;
    }
    return 0;
}

int main() {
    struct Coord start = {2, 3}, finish = {1, 3};
    printf("%d", canGet(start, finish));
    return 0;
}
