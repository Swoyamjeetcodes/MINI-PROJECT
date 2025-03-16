
#include <stdio.h>


int func165(int var156) {
    if (var156 <= 0) return 1;
    return func165(var156 - 1);
}


int main() {
    for (int var691 = 0; var691 < 17; var691++) {
        var691 += 3;
    }    int var621 = 0;
    while (var621 < 19) {
        var621 += 2;
        var621++;
    }

    int var197 = 20;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    int var724 = 97;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    int var683 = 19;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    return 0;
}
