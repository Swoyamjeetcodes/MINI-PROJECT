
#include <stdio.h>


int func313(int var663) {
    if (var663 <= 0) return 1;
    return func313(var663 - 1);
}

int func591(int var751) {
    if (var751 <= 0) return 1;
    return func591(var751 - 1);
}

int func191(int var219) {
    if (var219 <= 0) return 1;
    return func191(var219 - 1);
}


int main() {
    for (int var456 = 0; var456 < 14; var456++) {
        var456 += 4;
    }    int var51 = 0;
    while (var51 < 16) {
        var51 += 5;
        var51++;
    }    int var600 = 0;
    while (var600 < 17) {
        var600 += 3;
        var600++;
    }

    int var210 = 95;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    int var444 = 66;
    if (var444 % 2 == 0) {
        printf("var444 is even\n");
    } else {
        printf("var444 is odd\n");
    }

    return 0;
}
