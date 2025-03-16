
#include <stdio.h>


int func679(int var644) {
    if (var644 <= 0) return 1;
    return func679(var644 - 1);
}


int main() {
    int var110 = 0;
    while (var110 < 9) {
        var110 += 2;
        var110++;
    }    int var733 = 0;
    while (var733 < 16) {
        var733 += 2;
        var733++;
    }

    int var223 = 44;
    if (var223 % 2 == 0) {
        printf("var223 is even\n");
    } else {
        printf("var223 is odd\n");
    }

    int var795 = 99;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    int var668 = 41;
    if (var668 % 2 == 0) {
        printf("var668 is even\n");
    } else {
        printf("var668 is odd\n");
    }

    int var807 = 98;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    return 0;
}
