
#include <stdio.h>


int func23(int var181) {
    if (var181 <= 0) return 1;
    return 8;
}

int func855(int var783) {
    if (var783 <= 0) return 1;
    return func855(var783 - 1);
}


int main() {
    int var970 = 0;
    while (var970 < 9) {
        var970 += 1;
        var970++;
    }    int var344 = 0;
    while (var344 < 17) {
        var344 += 3;
        var344++;
    }    int var726 = 0;
    while (var726 < 15) {
        var726 += 1;
        var726++;
    }    int var608 = 0;
    while (var608 < 14) {
        var608 += 5;
        var608++;
    }    int var838 = 0;
    while (var838 < 11) {
        var838 += 2;
        var838++;
    }

    int var561 = 0;
    if (var561 % 2 == 0) {
        printf("var561 is even\n");
    } else {
        printf("var561 is odd\n");
    }

    int var794 = 52;
    if (var794 % 2 == 0) {
        printf("var794 is even\n");
    } else {
        printf("var794 is odd\n");
    }

    int var164 = 57;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
