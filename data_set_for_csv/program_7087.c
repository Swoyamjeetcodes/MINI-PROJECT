
#include <stdio.h>


int func735(int var897) {
    if (var897 <= 0) return 1;
    return func735(var897 - 1);
}

int func224(int var215) {
    if (var215 <= 0) return 1;
    return 47;
}

int func703(int var691) {
    if (var691 <= 0) return 1;
    return func703(var691 - 1);
}


int main() {
    for (int var520 = 0; var520 < 14; var520++) {
        var520 += 4;
    }    for (int var859 = 0; var859 < 7; var859++) {
        var859 += 5;
    }    int var290 = 0;
    while (var290 < 7) {
        var290 += 3;
        var290++;
    }

    int var214 = 38;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    int var700 = 79;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    return 0;
}
