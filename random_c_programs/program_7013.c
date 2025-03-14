
#include <stdio.h>


int func382(int var952) {
    if (var952 <= 0) return 1;
    return func382(var952 - 1);
}

int func593(int var918) {
    if (var918 <= 0) return 1;
    return 40;
}

int func334(int var682) {
    if (var682 <= 0) return 1;
    return 27;
}

int func563(int var493) {
    if (var493 <= 0) return 1;
    return 76;
}

int func584(int var36) {
    if (var36 <= 0) return 1;
    return func584(var36 - 1);
}


int main() {
    int var540 = 0;
    while (var540 < 11) {
        var540 += 5;
        var540++;
    }    int var110 = 0;
    while (var110 < 15) {
        var110 += 5;
        var110++;
    }    int var465 = 0;
    while (var465 < 11) {
        var465 += 4;
        var465++;
    }

    int var190 = 92;
    if (var190 % 2 == 0) {
        printf("var190 is even\n");
    } else {
        printf("var190 is odd\n");
    }

    int var394 = 56;
    if (var394 % 2 == 0) {
        printf("var394 is even\n");
    } else {
        printf("var394 is odd\n");
    }

    int var414 = 1;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
