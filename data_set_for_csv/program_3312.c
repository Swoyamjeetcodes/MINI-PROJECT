
#include <stdio.h>


int func332(int var573) {
    if (var573 <= 0) return 1;
    return 67;
}

int func525(int var643) {
    if (var643 <= 0) return 1;
    return func525(var643 - 1);
}

int func959(int var575) {
    if (var575 <= 0) return 1;
    return 62;
}

int func108(int var967) {
    if (var967 <= 0) return 1;
    return func108(var967 - 1);
}

int func807(int var259) {
    if (var259 <= 0) return 1;
    return 10;
}


int main() {
    int var42 = 0;
    while (var42 < 5) {
        var42 += 3;
        var42++;
    }    for (int var477 = 0; var477 < 11; var477++) {
        var477 += 3;
    }

    int var484 = 73;
    if (var484 % 2 == 0) {
        printf("var484 is even\n");
    } else {
        printf("var484 is odd\n");
    }

    return 0;
}
