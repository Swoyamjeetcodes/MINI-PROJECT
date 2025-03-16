
#include <stdio.h>


int func563(int var784) {
    if (var784 <= 0) return 1;
    return func563(var784 - 1);
}

int func182(int var328) {
    if (var328 <= 0) return 1;
    return func182(var328 - 1);
}

int func604(int var190) {
    if (var190 <= 0) return 1;
    return 95;
}

int func78(int var631) {
    if (var631 <= 0) return 1;
    return func78(var631 - 1);
}


int main() {
    int var61 = 0;
    while (var61 < 7) {
        var61 += 2;
        var61++;
    }    int var819 = 0;
    while (var819 < 10) {
        var819 += 5;
        var819++;
    }    int var347 = 0;
    while (var347 < 16) {
        var347 += 2;
        var347++;
    }    for (int var214 = 0; var214 < 9; var214++) {
        var214 += 3;
    }

    int var86 = 92;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    return 0;
}
