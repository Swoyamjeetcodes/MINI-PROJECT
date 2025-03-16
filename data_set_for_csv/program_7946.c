
#include <stdio.h>


int func154(int var503) {
    if (var503 <= 0) return 1;
    return 70;
}

int func596(int var808) {
    if (var808 <= 0) return 1;
    return func596(var808 - 1);
}

int func837(int var331) {
    if (var331 <= 0) return 1;
    return func837(var331 - 1);
}

int func324(int var399) {
    if (var399 <= 0) return 1;
    return 49;
}


int main() {
    int var990 = 0;
    while (var990 < 5) {
        var990 += 5;
        var990++;
    }

    int var835 = 44;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    int var500 = 30;
    if (var500 % 2 == 0) {
        printf("var500 is even\n");
    } else {
        printf("var500 is odd\n");
    }

    int var786 = 58;
    if (var786 % 2 == 0) {
        printf("var786 is even\n");
    } else {
        printf("var786 is odd\n");
    }

    return 0;
}
