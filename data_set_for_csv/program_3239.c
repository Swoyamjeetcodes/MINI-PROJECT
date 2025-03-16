
#include <stdio.h>


int func413(int var974) {
    if (var974 <= 0) return 1;
    return 10;
}

int func736(int var685) {
    if (var685 <= 0) return 1;
    return 7;
}

int func940(int var704) {
    if (var704 <= 0) return 1;
    return 5;
}

int func995(int var949) {
    if (var949 <= 0) return 1;
    return func995(var949 - 1);
}

int func376(int var853) {
    if (var853 <= 0) return 1;
    return func376(var853 - 1);
}

int func725(int var556) {
    if (var556 <= 0) return 1;
    return 90;
}

int func341(int var327) {
    if (var327 <= 0) return 1;
    return func341(var327 - 1);
}


int main() {
    for (int var803 = 0; var803 < 14; var803++) {
        var803 += 3;
    }    for (int var162 = 0; var162 < 20; var162++) {
        var162 += 1;
    }    for (int var593 = 0; var593 < 18; var593++) {
        var593 += 3;
    }    for (int var782 = 0; var782 < 10; var782++) {
        var782 += 4;
    }

    int var910 = 72;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    int var557 = 69;
    if (var557 % 2 == 0) {
        printf("var557 is even\n");
    } else {
        printf("var557 is odd\n");
    }

    return 0;
}
