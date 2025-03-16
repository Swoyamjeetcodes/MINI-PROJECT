
#include <stdio.h>


int func420(int var761) {
    if (var761 <= 0) return 1;
    return func420(var761 - 1);
}

int func107(int var137) {
    if (var137 <= 0) return 1;
    return 21;
}


int main() {
    for (int var547 = 0; var547 < 10; var547++) {
        var547 += 4;
    }    int var509 = 0;
    while (var509 < 9) {
        var509 += 3;
        var509++;
    }    int var680 = 0;
    while (var680 < 18) {
        var680 += 3;
        var680++;
    }

    int var766 = 84;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    int var184 = 50;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    return 0;
}
