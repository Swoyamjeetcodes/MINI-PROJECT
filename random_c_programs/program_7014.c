
#include <stdio.h>


int func234(int var110) {
    if (var110 <= 0) return 1;
    return func234(var110 - 1);
}

int func834(int var272) {
    if (var272 <= 0) return 1;
    return func834(var272 - 1);
}

int func812(int var217) {
    if (var217 <= 0) return 1;
    return func812(var217 - 1);
}


int main() {
    for (int var750 = 0; var750 < 6; var750++) {
        var750 += 2;
    }    int var362 = 0;
    while (var362 < 19) {
        var362 += 3;
        var362++;
    }    int var925 = 0;
    while (var925 < 19) {
        var925 += 2;
        var925++;
    }    for (int var517 = 0; var517 < 18; var517++) {
        var517 += 4;
    }    for (int var740 = 0; var740 < 17; var740++) {
        var740 += 3;
    }    int var715 = 0;
    while (var715 < 9) {
        var715 += 1;
        var715++;
    }    int var426 = 0;
    while (var426 < 10) {
        var426 += 1;
        var426++;
    }

    int var289 = 65;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    int var387 = 23;
    if (var387 % 2 == 0) {
        printf("var387 is even\n");
    } else {
        printf("var387 is odd\n");
    }

    int var692 = 81;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    return 0;
}
