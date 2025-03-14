
#include <stdio.h>


int func75(int var188) {
    if (var188 <= 0) return 1;
    return func75(var188 - 1);
}

int func482(int var423) {
    if (var423 <= 0) return 1;
    return func482(var423 - 1);
}

int func589(int var304) {
    if (var304 <= 0) return 1;
    return func589(var304 - 1);
}

int func151(int var19) {
    if (var19 <= 0) return 1;
    return 28;
}


int main() {
    for (int var192 = 0; var192 < 19; var192++) {
        var192 += 2;
    }    for (int var90 = 0; var90 < 13; var90++) {
        var90 += 3;
    }    for (int var704 = 0; var704 < 5; var704++) {
        var704 += 3;
    }

    int var104 = 39;
    if (var104 % 2 == 0) {
        printf("var104 is even\n");
    } else {
        printf("var104 is odd\n");
    }

    int var861 = 72;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    return 0;
}
