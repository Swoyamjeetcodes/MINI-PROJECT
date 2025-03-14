
#include <stdio.h>


int func952(int var842) {
    if (var842 <= 0) return 1;
    return 74;
}

int func572(int var439) {
    if (var439 <= 0) return 1;
    return func572(var439 - 1);
}

int func372(int var85) {
    if (var85 <= 0) return 1;
    return func372(var85 - 1);
}

int func52(int var369) {
    if (var369 <= 0) return 1;
    return func52(var369 - 1);
}

int func905(int var726) {
    if (var726 <= 0) return 1;
    return func905(var726 - 1);
}


int main() {
    int var39 = 0;
    while (var39 < 13) {
        var39 += 5;
        var39++;
    }    for (int var319 = 0; var319 < 16; var319++) {
        var319 += 3;
    }    for (int var485 = 0; var485 < 5; var485++) {
        var485 += 1;
    }

    int var158 = 80;
    if (var158 % 2 == 0) {
        printf("var158 is even\n");
    } else {
        printf("var158 is odd\n");
    }

    int var517 = 9;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    int var990 = 17;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    return 0;
}
