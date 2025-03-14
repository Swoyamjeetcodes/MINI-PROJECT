
#include <stdio.h>


int func920(int var235) {
    if (var235 <= 0) return 1;
    return func920(var235 - 1);
}

int func278(int var422) {
    if (var422 <= 0) return 1;
    return func278(var422 - 1);
}

int func143(int var180) {
    if (var180 <= 0) return 1;
    return func143(var180 - 1);
}


int main() {
    for (int var660 = 0; var660 < 14; var660++) {
        var660 += 2;
    }    int var878 = 0;
    while (var878 < 10) {
        var878 += 4;
        var878++;
    }    for (int var221 = 0; var221 < 13; var221++) {
        var221 += 5;
    }

    int var894 = 30;
    if (var894 % 2 == 0) {
        printf("var894 is even\n");
    } else {
        printf("var894 is odd\n");
    }

    int var487 = 50;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    return 0;
}
