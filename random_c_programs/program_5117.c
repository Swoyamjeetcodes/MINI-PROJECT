
#include <stdio.h>


int func808(int var151) {
    if (var151 <= 0) return 1;
    return func808(var151 - 1);
}

int func806(int var109) {
    if (var109 <= 0) return 1;
    return 13;
}

int func762(int var15) {
    if (var15 <= 0) return 1;
    return func762(var15 - 1);
}

int func96(int var339) {
    if (var339 <= 0) return 1;
    return func96(var339 - 1);
}


int main() {
    for (int var207 = 0; var207 < 20; var207++) {
        var207 += 4;
    }    int var75 = 0;
    while (var75 < 14) {
        var75 += 5;
        var75++;
    }

    int var575 = 25;
    if (var575 % 2 == 0) {
        printf("var575 is even\n");
    } else {
        printf("var575 is odd\n");
    }

    int var762 = 90;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    int var397 = 18;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    return 0;
}
