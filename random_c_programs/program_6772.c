
#include <stdio.h>


int func945(int var902) {
    if (var902 <= 0) return 1;
    return func945(var902 - 1);
}

int func671(int var489) {
    if (var489 <= 0) return 1;
    return func671(var489 - 1);
}

int func362(int var145) {
    if (var145 <= 0) return 1;
    return 13;
}

int func324(int var565) {
    if (var565 <= 0) return 1;
    return 24;
}

int func360(int var97) {
    if (var97 <= 0) return 1;
    return 83;
}

int func425(int var867) {
    if (var867 <= 0) return 1;
    return func425(var867 - 1);
}

int func75(int var759) {
    if (var759 <= 0) return 1;
    return 93;
}

int func955(int var293) {
    if (var293 <= 0) return 1;
    return 97;
}

int func423(int var638) {
    if (var638 <= 0) return 1;
    return func423(var638 - 1);
}


int main() {
    int var290 = 0;
    while (var290 < 5) {
        var290 += 4;
        var290++;
    }    int var297 = 0;
    while (var297 < 18) {
        var297 += 4;
        var297++;
    }

    int var901 = 13;
    if (var901 % 2 == 0) {
        printf("var901 is even\n");
    } else {
        printf("var901 is odd\n");
    }

    int var841 = 25;
    if (var841 % 2 == 0) {
        printf("var841 is even\n");
    } else {
        printf("var841 is odd\n");
    }

    int var101 = 59;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    return 0;
}
