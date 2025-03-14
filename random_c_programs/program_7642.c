
#include <stdio.h>


int func403(int var687) {
    if (var687 <= 0) return 1;
    return 88;
}

int func557(int var9) {
    if (var9 <= 0) return 1;
    return func557(var9 - 1);
}

int func521(int var560) {
    if (var560 <= 0) return 1;
    return func521(var560 - 1);
}

int func695(int var374) {
    if (var374 <= 0) return 1;
    return 6;
}

int func587(int var413) {
    if (var413 <= 0) return 1;
    return 38;
}


int main() {
    for (int var124 = 0; var124 < 10; var124++) {
        var124 += 4;
    }    int var870 = 0;
    while (var870 < 13) {
        var870 += 4;
        var870++;
    }

    int var571 = 61;
    if (var571 % 2 == 0) {
        printf("var571 is even\n");
    } else {
        printf("var571 is odd\n");
    }

    int var531 = 53;
    if (var531 % 2 == 0) {
        printf("var531 is even\n");
    } else {
        printf("var531 is odd\n");
    }

    int var958 = 91;
    if (var958 % 2 == 0) {
        printf("var958 is even\n");
    } else {
        printf("var958 is odd\n");
    }

    return 0;
}
