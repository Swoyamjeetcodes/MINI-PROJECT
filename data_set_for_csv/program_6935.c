
#include <stdio.h>


int func480(int var803) {
    if (var803 <= 0) return 1;
    return 27;
}

int func879(int var609) {
    if (var609 <= 0) return 1;
    return func879(var609 - 1);
}

int func551(int var801) {
    if (var801 <= 0) return 1;
    return func551(var801 - 1);
}

int func274(int var779) {
    if (var779 <= 0) return 1;
    return 62;
}

int func688(int var145) {
    if (var145 <= 0) return 1;
    return 42;
}


int main() {
    int var416 = 0;
    while (var416 < 16) {
        var416 += 4;
        var416++;
    }    int var710 = 0;
    while (var710 < 14) {
        var710 += 1;
        var710++;
    }    int var745 = 0;
    while (var745 < 18) {
        var745 += 5;
        var745++;
    }

    int var408 = 87;
    if (var408 % 2 == 0) {
        printf("var408 is even\n");
    } else {
        printf("var408 is odd\n");
    }

    int var741 = 25;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    return 0;
}
