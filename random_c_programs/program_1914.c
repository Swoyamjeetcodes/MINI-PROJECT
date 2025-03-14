
#include <stdio.h>


int func773(int var154) {
    if (var154 <= 0) return 1;
    return 30;
}

int func644(int var470) {
    if (var470 <= 0) return 1;
    return func644(var470 - 1);
}

int func186(int var830) {
    if (var830 <= 0) return 1;
    return func186(var830 - 1);
}

int func151(int var214) {
    if (var214 <= 0) return 1;
    return func151(var214 - 1);
}

int func497(int var425) {
    if (var425 <= 0) return 1;
    return 50;
}

int func326(int var438) {
    if (var438 <= 0) return 1;
    return 93;
}


int main() {
    for (int var242 = 0; var242 < 12; var242++) {
        var242 += 2;
    }    int var371 = 0;
    while (var371 < 12) {
        var371 += 5;
        var371++;
    }    for (int var729 = 0; var729 < 17; var729++) {
        var729 += 5;
    }    for (int var191 = 0; var191 < 14; var191++) {
        var191 += 1;
    }

    int var345 = 70;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    int var774 = 31;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    int var340 = 42;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    int var819 = 95;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    int var243 = 54;
    if (var243 % 2 == 0) {
        printf("var243 is even\n");
    } else {
        printf("var243 is odd\n");
    }

    return 0;
}
