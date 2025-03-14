
#include <stdio.h>


int func259(int var316) {
    if (var316 <= 0) return 1;
    return func259(var316 - 1);
}


int main() {
    int var422 = 0;
    while (var422 < 20) {
        var422 += 2;
        var422++;
    }    int var367 = 0;
    while (var367 < 6) {
        var367 += 3;
        var367++;
    }

    int var743 = 16;
    if (var743 % 2 == 0) {
        printf("var743 is even\n");
    } else {
        printf("var743 is odd\n");
    }

    int var86 = 93;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    return 0;
}
