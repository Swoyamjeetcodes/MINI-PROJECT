
#include <stdio.h>


int func151(int var761) {
    if (var761 <= 0) return 1;
    return func151(var761 - 1);
}

int func353(int var867) {
    if (var867 <= 0) return 1;
    return 8;
}


int main() {
    int var937 = 0;
    while (var937 < 7) {
        var937 += 1;
        var937++;
    }

    int var966 = 8;
    if (var966 % 2 == 0) {
        printf("var966 is even\n");
    } else {
        printf("var966 is odd\n");
    }

    int var451 = 61;
    if (var451 % 2 == 0) {
        printf("var451 is even\n");
    } else {
        printf("var451 is odd\n");
    }

    int var829 = 42;
    if (var829 % 2 == 0) {
        printf("var829 is even\n");
    } else {
        printf("var829 is odd\n");
    }

    return 0;
}
