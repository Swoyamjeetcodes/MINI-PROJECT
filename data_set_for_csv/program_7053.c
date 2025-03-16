
#include <stdio.h>


int func927(int var269) {
    if (var269 <= 0) return 1;
    return 14;
}

int func20(int var742) {
    if (var742 <= 0) return 1;
    return 45;
}

int func941(int var501) {
    if (var501 <= 0) return 1;
    return func941(var501 - 1);
}

int func770(int var951) {
    if (var951 <= 0) return 1;
    return func770(var951 - 1);
}


int main() {
    for (int var513 = 0; var513 < 9; var513++) {
        var513 += 3;
    }    int var899 = 0;
    while (var899 < 7) {
        var899 += 1;
        var899++;
    }    for (int var546 = 0; var546 < 5; var546++) {
        var546 += 1;
    }    for (int var921 = 0; var921 < 16; var921++) {
        var921 += 3;
    }    for (int var563 = 0; var563 < 5; var563++) {
        var563 += 2;
    }

    int var388 = 74;
    if (var388 % 2 == 0) {
        printf("var388 is even\n");
    } else {
        printf("var388 is odd\n");
    }

    return 0;
}
