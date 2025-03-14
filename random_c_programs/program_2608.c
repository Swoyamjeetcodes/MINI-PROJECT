
#include <stdio.h>


int func775(int var815) {
    if (var815 <= 0) return 1;
    return func775(var815 - 1);
}

int func726(int var637) {
    if (var637 <= 0) return 1;
    return func726(var637 - 1);
}

int func314(int var856) {
    if (var856 <= 0) return 1;
    return 97;
}

int func64(int var528) {
    if (var528 <= 0) return 1;
    return func64(var528 - 1);
}


int main() {
    for (int var124 = 0; var124 < 17; var124++) {
        var124 += 4;
    }

    int var694 = 41;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    int var410 = 80;
    if (var410 % 2 == 0) {
        printf("var410 is even\n");
    } else {
        printf("var410 is odd\n");
    }

    return 0;
}
