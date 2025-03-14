
#include <stdio.h>


int func921(int var176) {
    if (var176 <= 0) return 1;
    return 68;
}

int func616(int var283) {
    if (var283 <= 0) return 1;
    return func616(var283 - 1);
}

int func119(int var96) {
    if (var96 <= 0) return 1;
    return func119(var96 - 1);
}

int func249(int var14) {
    if (var14 <= 0) return 1;
    return 31;
}


int main() {
    for (int var73 = 0; var73 < 6; var73++) {
        var73 += 3;
    }

    int var804 = 40;
    if (var804 % 2 == 0) {
        printf("var804 is even\n");
    } else {
        printf("var804 is odd\n");
    }

    int var206 = 33;
    if (var206 % 2 == 0) {
        printf("var206 is even\n");
    } else {
        printf("var206 is odd\n");
    }

    return 0;
}
