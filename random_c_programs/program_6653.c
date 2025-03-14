
#include <stdio.h>


int func122(int var995) {
    if (var995 <= 0) return 1;
    return 67;
}

int func898(int var507) {
    if (var507 <= 0) return 1;
    return 21;
}

int func993(int var389) {
    if (var389 <= 0) return 1;
    return func993(var389 - 1);
}


int main() {
    for (int var245 = 0; var245 < 9; var245++) {
        var245 += 2;
    }    for (int var387 = 0; var387 < 14; var387++) {
        var387 += 2;
    }    int var529 = 0;
    while (var529 < 7) {
        var529 += 4;
        var529++;
    }

    int var645 = 5;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    int var269 = 33;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    return 0;
}
