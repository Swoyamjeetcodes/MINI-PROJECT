
#include <stdio.h>


int func387(int var66) {
    if (var66 <= 0) return 1;
    return func387(var66 - 1);
}

int func209(int var89) {
    if (var89 <= 0) return 1;
    return 32;
}

int func427(int var839) {
    if (var839 <= 0) return 1;
    return func427(var839 - 1);
}

int func102(int var531) {
    if (var531 <= 0) return 1;
    return 47;
}

int func159(int var268) {
    if (var268 <= 0) return 1;
    return func159(var268 - 1);
}


int main() {
    for (int var954 = 0; var954 < 12; var954++) {
        var954 += 5;
    }    int var635 = 0;
    while (var635 < 18) {
        var635 += 5;
        var635++;
    }

    int var385 = 67;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    int var848 = 87;
    if (var848 % 2 == 0) {
        printf("var848 is even\n");
    } else {
        printf("var848 is odd\n");
    }

    int var484 = 26;
    if (var484 % 2 == 0) {
        printf("var484 is even\n");
    } else {
        printf("var484 is odd\n");
    }

    return 0;
}
