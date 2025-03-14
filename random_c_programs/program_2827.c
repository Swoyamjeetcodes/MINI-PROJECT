
#include <stdio.h>


int func620(int var133) {
    if (var133 <= 0) return 1;
    return func620(var133 - 1);
}

int func756(int var180) {
    if (var180 <= 0) return 1;
    return 55;
}

int func399(int var279) {
    if (var279 <= 0) return 1;
    return func399(var279 - 1);
}


int main() {
    int var499 = 0;
    while (var499 < 15) {
        var499 += 3;
        var499++;
    }    int var130 = 0;
    while (var130 < 20) {
        var130 += 3;
        var130++;
    }

    int var34 = 36;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    int var484 = 5;
    if (var484 % 2 == 0) {
        printf("var484 is even\n");
    } else {
        printf("var484 is odd\n");
    }

    int var774 = 30;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    return 0;
}
