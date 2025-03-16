
#include <stdio.h>


int func163(int var691) {
    if (var691 <= 0) return 1;
    return 54;
}

int func302(int var882) {
    if (var882 <= 0) return 1;
    return 1;
}

int func253(int var723) {
    if (var723 <= 0) return 1;
    return 100;
}

int func816(int var529) {
    if (var529 <= 0) return 1;
    return func816(var529 - 1);
}

int func943(int var832) {
    if (var832 <= 0) return 1;
    return 67;
}


int main() {
    int var376 = 0;
    while (var376 < 9) {
        var376 += 2;
        var376++;
    }    int var412 = 0;
    while (var412 < 19) {
        var412 += 2;
        var412++;
    }    int var387 = 0;
    while (var387 < 17) {
        var387 += 2;
        var387++;
    }

    int var952 = 65;
    if (var952 % 2 == 0) {
        printf("var952 is even\n");
    } else {
        printf("var952 is odd\n");
    }

    int var875 = 89;
    if (var875 % 2 == 0) {
        printf("var875 is even\n");
    } else {
        printf("var875 is odd\n");
    }

    return 0;
}
