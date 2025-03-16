
#include <stdio.h>


int func314(int var317) {
    if (var317 <= 0) return 1;
    return 23;
}

int func75(int var174) {
    if (var174 <= 0) return 1;
    return 4;
}

int func715(int var454) {
    if (var454 <= 0) return 1;
    return func715(var454 - 1);
}

int func55(int var318) {
    if (var318 <= 0) return 1;
    return 84;
}

int func704(int var75) {
    if (var75 <= 0) return 1;
    return func704(var75 - 1);
}


int main() {
    for (int var21 = 0; var21 < 18; var21++) {
        var21 += 1;
    }    for (int var495 = 0; var495 < 20; var495++) {
        var495 += 4;
    }

    int var655 = 12;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    int var435 = 67;
    if (var435 % 2 == 0) {
        printf("var435 is even\n");
    } else {
        printf("var435 is odd\n");
    }

    return 0;
}
