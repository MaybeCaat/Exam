#include <stdio.h>

struct University {
    char* name;
    int numberOfStudents;
    int rating;
};

float averageStudents(struct University data[], int n) {
    float sumStudents = 0;
    struct University *ptr = data;
    for (int i=0; i<n; ptr++, i++) {
        sumStudents += (float) (ptr->numberOfStudents);
    }
    return sumStudents / (float) n;
}

int main() {
    struct University data[] = {{"First", 63, 4}, {"Second", 33, 2}, {"Third", 100, 5}};
    printf("%f", averageStudents(data, 3));
    return 0;
}