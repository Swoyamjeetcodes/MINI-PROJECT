
#include <stdio.h>


int func218(int var44) {
    if (var44 <= 0) return 1;
    return 90;
}

int func998(int var921) {
    if (var921 <= 0) return 1;
    return func998(var921 - 1);
}

int func921(int var834) {
    if (var834 <= 0) return 1;
    return func921(var834 - 1);
}

int func210(int var824) {
    if (var824 <= 0) return 1;
    return func210(var824 - 1);
}

int func463(int var554) {
    if (var554 <= 0) return 1;
    return func463(var554 - 1);
}


int main() {
    for (int var443 = 0; var443 < 14; var443++) {
        var443 += 5;
    }    int var757 = 0;
    while (var757 < 11) {
        var757 += 2;
        var757++;
    }

    int var454 = 51;
    if (var454 % 2 == 0) {
        printf("var454 is even\n");
    } else {
        printf("var454 is odd\n");
    }

    int var327 = 9;
    if (var327 % 2 == 0) {
        printf("var327 is even\n");
    } else {
        printf("var327 is odd\n");
    }

    int var772 = 85;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    return 0;
}
