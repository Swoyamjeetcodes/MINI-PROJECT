
#include <stdio.h>


int func16(int var196) {
    if (var196 <= 0) return 1;
    return 92;
}

int func767(int var130) {
    if (var130 <= 0) return 1;
    return func767(var130 - 1);
}

int func23(int var504) {
    if (var504 <= 0) return 1;
    return func23(var504 - 1);
}

int func848(int var664) {
    if (var664 <= 0) return 1;
    return func848(var664 - 1);
}


int main() {
    int var482 = 0;
    while (var482 < 20) {
        var482 += 2;
        var482++;
    }    int var227 = 0;
    while (var227 < 12) {
        var227 += 2;
        var227++;
    }

    int var717 = 42;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    return 0;
}
