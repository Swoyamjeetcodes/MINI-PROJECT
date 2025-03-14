
#include <stdio.h>


int func773(int var531) {
    if (var531 <= 0) return 1;
    return 66;
}

int func858(int var106) {
    if (var106 <= 0) return 1;
    return 43;
}

int func920(int var387) {
    if (var387 <= 0) return 1;
    return func920(var387 - 1);
}


int main() {
    for (int var578 = 0; var578 < 14; var578++) {
        var578 += 5;
    }

    int var910 = 86;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    int var415 = 18;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    return 0;
}
