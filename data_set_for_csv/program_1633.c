
#include <stdio.h>


int func277(int var855) {
    if (var855 <= 0) return 1;
    return func277(var855 - 1);
}

int func370(int var137) {
    if (var137 <= 0) return 1;
    return func370(var137 - 1);
}

int func787(int var75) {
    if (var75 <= 0) return 1;
    return 13;
}


int main() {
    int var896 = 0;
    while (var896 < 20) {
        var896 += 2;
        var896++;
    }    int var14 = 0;
    while (var14 < 20) {
        var14 += 4;
        var14++;
    }    int var711 = 0;
    while (var711 < 15) {
        var711 += 2;
        var711++;
    }

    int var436 = 34;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    int var646 = 59;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    return 0;
}
