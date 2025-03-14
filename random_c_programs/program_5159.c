
#include <stdio.h>


int func483(int var112) {
    if (var112 <= 0) return 1;
    return func483(var112 - 1);
}

int func596(int var387) {
    if (var387 <= 0) return 1;
    return func596(var387 - 1);
}

int func251(int var803) {
    if (var803 <= 0) return 1;
    return func251(var803 - 1);
}

int func762(int var570) {
    if (var570 <= 0) return 1;
    return func762(var570 - 1);
}

int func851(int var507) {
    if (var507 <= 0) return 1;
    return 71;
}


int main() {
    for (int var145 = 0; var145 < 11; var145++) {
        var145 += 2;
    }

    int var276 = 21;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    int var782 = 92;
    if (var782 % 2 == 0) {
        printf("var782 is even\n");
    } else {
        printf("var782 is odd\n");
    }

    return 0;
}
