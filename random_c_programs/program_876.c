
#include <stdio.h>


int func828(int var508) {
    if (var508 <= 0) return 1;
    return func828(var508 - 1);
}


int main() {
    for (int var722 = 0; var722 < 16; var722++) {
        var722 += 5;
    }    int var694 = 0;
    while (var694 < 13) {
        var694 += 5;
        var694++;
    }    for (int var883 = 0; var883 < 20; var883++) {
        var883 += 1;
    }

    int var411 = 86;
    if (var411 % 2 == 0) {
        printf("var411 is even\n");
    } else {
        printf("var411 is odd\n");
    }

    int var969 = 98;
    if (var969 % 2 == 0) {
        printf("var969 is even\n");
    } else {
        printf("var969 is odd\n");
    }

    int var478 = 73;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    return 0;
}
