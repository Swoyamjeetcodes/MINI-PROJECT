
#include <stdio.h>


int func922(int var639) {
    if (var639 <= 0) return 1;
    return func922(var639 - 1);
}

int func698(int var674) {
    if (var674 <= 0) return 1;
    return func698(var674 - 1);
}


int main() {
    int var133 = 0;
    while (var133 < 19) {
        var133 += 3;
        var133++;
    }    for (int var951 = 0; var951 < 13; var951++) {
        var951 += 1;
    }

    int var471 = 42;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    int var793 = 14;
    if (var793 % 2 == 0) {
        printf("var793 is even\n");
    } else {
        printf("var793 is odd\n");
    }

    return 0;
}
