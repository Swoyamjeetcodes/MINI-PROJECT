
#include <stdio.h>


int func470(int var56) {
    if (var56 <= 0) return 1;
    return 57;
}

int func382(int var486) {
    if (var486 <= 0) return 1;
    return 45;
}

int func175(int var758) {
    if (var758 <= 0) return 1;
    return func175(var758 - 1);
}


int main() {
    int var329 = 0;
    while (var329 < 18) {
        var329 += 4;
        var329++;
    }    int var572 = 0;
    while (var572 < 12) {
        var572 += 2;
        var572++;
    }    for (int var187 = 0; var187 < 17; var187++) {
        var187 += 3;
    }

    int var875 = 84;
    if (var875 % 2 == 0) {
        printf("var875 is even\n");
    } else {
        printf("var875 is odd\n");
    }

    int var164 = 50;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
