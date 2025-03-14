
#include <stdio.h>


int func196(int var396) {
    if (var396 <= 0) return 1;
    return func196(var396 - 1);
}


int main() {
    for (int var622 = 0; var622 < 11; var622++) {
        var622 += 3;
    }    int var747 = 0;
    while (var747 < 5) {
        var747 += 5;
        var747++;
    }    int var369 = 0;
    while (var369 < 7) {
        var369 += 3;
        var369++;
    }

    int var355 = 34;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    int var717 = 60;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
