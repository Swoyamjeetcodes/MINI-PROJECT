
#include <stdio.h>


int func816(int var608) {
    if (var608 <= 0) return 1;
    return 57;
}

int func706(int var666) {
    if (var666 <= 0) return 1;
    return func706(var666 - 1);
}

int func514(int var482) {
    if (var482 <= 0) return 1;
    return 18;
}


int main() {
    int var123 = 0;
    while (var123 < 16) {
        var123 += 1;
        var123++;
    }    int var766 = 0;
    while (var766 < 12) {
        var766 += 2;
        var766++;
    }

    int var30 = 32;
    if (var30 % 2 == 0) {
        printf("var30 is even\n");
    } else {
        printf("var30 is odd\n");
    }

    return 0;
}
