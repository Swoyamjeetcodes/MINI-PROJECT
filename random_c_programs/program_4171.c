
#include <stdio.h>


int func899(int var955) {
    if (var955 <= 0) return 1;
    return func899(var955 - 1);
}

int func519(int var853) {
    if (var853 <= 0) return 1;
    return func519(var853 - 1);
}

int func908(int var219) {
    if (var219 <= 0) return 1;
    return 85;
}


int main() {
    for (int var190 = 0; var190 < 16; var190++) {
        var190 += 4;
    }    for (int var754 = 0; var754 < 14; var754++) {
        var754 += 2;
    }    int var367 = 0;
    while (var367 < 11) {
        var367 += 2;
        var367++;
    }

    int var816 = 52;
    if (var816 % 2 == 0) {
        printf("var816 is even\n");
    } else {
        printf("var816 is odd\n");
    }

    int var111 = 12;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    int var692 = 37;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    return 0;
}
