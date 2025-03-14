
#include <stdio.h>


int func764(int var382) {
    if (var382 <= 0) return 1;
    return 65;
}

int func986(int var217) {
    if (var217 <= 0) return 1;
    return func986(var217 - 1);
}

int func497(int var491) {
    if (var491 <= 0) return 1;
    return 16;
}

int func903(int var826) {
    if (var826 <= 0) return 1;
    return 35;
}


int main() {
    int var867 = 0;
    while (var867 < 11) {
        var867 += 3;
        var867++;
    }

    int var779 = 67;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    int var780 = 22;
    if (var780 % 2 == 0) {
        printf("var780 is even\n");
    } else {
        printf("var780 is odd\n");
    }

    int var98 = 15;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    return 0;
}
