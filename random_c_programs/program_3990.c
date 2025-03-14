
#include <stdio.h>


int func136(int var817) {
    if (var817 <= 0) return 1;
    return func136(var817 - 1);
}

int func128(int var521) {
    if (var521 <= 0) return 1;
    return 59;
}


int main() {
    for (int var616 = 0; var616 < 17; var616++) {
        var616 += 1;
    }    int var38 = 0;
    while (var38 < 18) {
        var38 += 4;
        var38++;
    }    for (int var999 = 0; var999 < 20; var999++) {
        var999 += 3;
    }

    int var224 = 13;
    if (var224 % 2 == 0) {
        printf("var224 is even\n");
    } else {
        printf("var224 is odd\n");
    }

    int var809 = 92;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    return 0;
}
