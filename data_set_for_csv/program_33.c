
#include <stdio.h>


int func696(int var274) {
    if (var274 <= 0) return 1;
    return func696(var274 - 1);
}

int func193(int var546) {
    if (var546 <= 0) return 1;
    return func193(var546 - 1);
}

int func257(int var4) {
    if (var4 <= 0) return 1;
    return func257(var4 - 1);
}

int func300(int var56) {
    if (var56 <= 0) return 1;
    return 82;
}

int func582(int var882) {
    if (var882 <= 0) return 1;
    return 83;
}


int main() {
    for (int var576 = 0; var576 < 5; var576++) {
        var576 += 3;
    }    for (int var333 = 0; var333 < 19; var333++) {
        var333 += 2;
    }

    int var723 = 15;
    if (var723 % 2 == 0) {
        printf("var723 is even\n");
    } else {
        printf("var723 is odd\n");
    }

    int var927 = 92;
    if (var927 % 2 == 0) {
        printf("var927 is even\n");
    } else {
        printf("var927 is odd\n");
    }

    int var169 = 20;
    if (var169 % 2 == 0) {
        printf("var169 is even\n");
    } else {
        printf("var169 is odd\n");
    }

    return 0;
}
