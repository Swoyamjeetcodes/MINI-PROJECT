
#include <stdio.h>


int func627(int var518) {
    if (var518 <= 0) return 1;
    return 49;
}

int func924(int var965) {
    if (var965 <= 0) return 1;
    return 54;
}

int func46(int var206) {
    if (var206 <= 0) return 1;
    return 63;
}

int func541(int var821) {
    if (var821 <= 0) return 1;
    return 26;
}

int func825(int var999) {
    if (var999 <= 0) return 1;
    return func825(var999 - 1);
}


int main() {
    int var23 = 0;
    while (var23 < 8) {
        var23 += 2;
        var23++;
    }    int var766 = 0;
    while (var766 < 18) {
        var766 += 1;
        var766++;
    }

    int var528 = 33;
    if (var528 % 2 == 0) {
        printf("var528 is even\n");
    } else {
        printf("var528 is odd\n");
    }

    return 0;
}
