
#include <stdio.h>


int func130(int var655) {
    if (var655 <= 0) return 1;
    return 16;
}

int func14(int var382) {
    if (var382 <= 0) return 1;
    return func14(var382 - 1);
}

int func518(int var795) {
    if (var795 <= 0) return 1;
    return func518(var795 - 1);
}

int func234(int var516) {
    if (var516 <= 0) return 1;
    return 9;
}

int func198(int var685) {
    if (var685 <= 0) return 1;
    return func198(var685 - 1);
}


int main() {
    int var63 = 0;
    while (var63 < 12) {
        var63 += 1;
        var63++;
    }

    int var511 = 91;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    int var300 = 10;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    int var440 = 62;
    if (var440 % 2 == 0) {
        printf("var440 is even\n");
    } else {
        printf("var440 is odd\n");
    }

    return 0;
}
