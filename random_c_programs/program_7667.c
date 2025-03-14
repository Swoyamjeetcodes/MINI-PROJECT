
#include <stdio.h>


int func669(int var646) {
    if (var646 <= 0) return 1;
    return func669(var646 - 1);
}

int func748(int var526) {
    if (var526 <= 0) return 1;
    return 13;
}


int main() {
    int var328 = 0;
    while (var328 < 14) {
        var328 += 3;
        var328++;
    }

    int var842 = 92;
    if (var842 % 2 == 0) {
        printf("var842 is even\n");
    } else {
        printf("var842 is odd\n");
    }

    int var545 = 27;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
