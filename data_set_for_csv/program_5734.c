
#include <stdio.h>


int func543(int var518) {
    if (var518 <= 0) return 1;
    return func543(var518 - 1);
}

int func429(int var584) {
    if (var584 <= 0) return 1;
    return 25;
}

int func243(int var253) {
    if (var253 <= 0) return 1;
    return 56;
}


int main() {
    int var955 = 0;
    while (var955 < 15) {
        var955 += 3;
        var955++;
    }    for (int var587 = 0; var587 < 11; var587++) {
        var587 += 3;
    }

    int var703 = 56;
    if (var703 % 2 == 0) {
        printf("var703 is even\n");
    } else {
        printf("var703 is odd\n");
    }

    int var827 = 75;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    int var510 = 74;
    if (var510 % 2 == 0) {
        printf("var510 is even\n");
    } else {
        printf("var510 is odd\n");
    }

    return 0;
}
