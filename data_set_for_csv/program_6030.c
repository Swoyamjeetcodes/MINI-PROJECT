
#include <stdio.h>


int func525(int var966) {
    if (var966 <= 0) return 1;
    return func525(var966 - 1);
}

int func591(int var409) {
    if (var409 <= 0) return 1;
    return func591(var409 - 1);
}

int func279(int var732) {
    if (var732 <= 0) return 1;
    return 18;
}

int func111(int var496) {
    if (var496 <= 0) return 1;
    return func111(var496 - 1);
}


int main() {
    for (int var906 = 0; var906 < 12; var906++) {
        var906 += 4;
    }    int var500 = 0;
    while (var500 < 18) {
        var500 += 2;
        var500++;
    }

    int var816 = 50;
    if (var816 % 2 == 0) {
        printf("var816 is even\n");
    } else {
        printf("var816 is odd\n");
    }

    int var247 = 4;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    return 0;
}
