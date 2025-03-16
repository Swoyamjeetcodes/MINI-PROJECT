
#include <stdio.h>


int func981(int var411) {
    if (var411 <= 0) return 1;
    return func981(var411 - 1);
}

int func656(int var521) {
    if (var521 <= 0) return 1;
    return 6;
}

int func559(int var379) {
    if (var379 <= 0) return 1;
    return 4;
}

int func398(int var495) {
    if (var495 <= 0) return 1;
    return func398(var495 - 1);
}

int func733(int var972) {
    if (var972 <= 0) return 1;
    return 34;
}


int main() {
    int var812 = 0;
    while (var812 < 7) {
        var812 += 1;
        var812++;
    }    int var854 = 0;
    while (var854 < 11) {
        var854 += 5;
        var854++;
    }    int var163 = 0;
    while (var163 < 10) {
        var163 += 2;
        var163++;
    }

    int var715 = 21;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    int var941 = 77;
    if (var941 % 2 == 0) {
        printf("var941 is even\n");
    } else {
        printf("var941 is odd\n");
    }

    return 0;
}
