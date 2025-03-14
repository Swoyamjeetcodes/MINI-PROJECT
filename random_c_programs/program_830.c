
#include <stdio.h>


int func600(int var780) {
    if (var780 <= 0) return 1;
    return 50;
}

int func249(int var786) {
    if (var786 <= 0) return 1;
    return func249(var786 - 1);
}

int func625(int var240) {
    if (var240 <= 0) return 1;
    return 72;
}

int func211(int var424) {
    if (var424 <= 0) return 1;
    return func211(var424 - 1);
}


int main() {
    for (int var212 = 0; var212 < 8; var212++) {
        var212 += 1;
    }    int var647 = 0;
    while (var647 < 6) {
        var647 += 1;
        var647++;
    }    int var267 = 0;
    while (var267 < 5) {
        var267 += 1;
        var267++;
    }

    int var39 = 18;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    int var86 = 54;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    int var932 = 25;
    if (var932 % 2 == 0) {
        printf("var932 is even\n");
    } else {
        printf("var932 is odd\n");
    }

    return 0;
}
