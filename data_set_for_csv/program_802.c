
#include <stdio.h>


int func480(int var946) {
    if (var946 <= 0) return 1;
    return 24;
}

int func907(int var289) {
    if (var289 <= 0) return 1;
    return func907(var289 - 1);
}

int func990(int var4) {
    if (var4 <= 0) return 1;
    return 55;
}


int main() {
    for (int var661 = 0; var661 < 14; var661++) {
        var661 += 1;
    }    int var769 = 0;
    while (var769 < 17) {
        var769 += 4;
        var769++;
    }    int var30 = 0;
    while (var30 < 8) {
        var30 += 2;
        var30++;
    }

    int var937 = 73;
    if (var937 % 2 == 0) {
        printf("var937 is even\n");
    } else {
        printf("var937 is odd\n");
    }

    int var643 = 60;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    int var436 = 62;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    return 0;
}
