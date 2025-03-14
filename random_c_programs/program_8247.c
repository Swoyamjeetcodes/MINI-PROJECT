
#include <stdio.h>


int func247(int var151) {
    if (var151 <= 0) return 1;
    return func247(var151 - 1);
}

int func457(int var781) {
    if (var781 <= 0) return 1;
    return 73;
}

int func753(int var902) {
    if (var902 <= 0) return 1;
    return func753(var902 - 1);
}

int func973(int var743) {
    if (var743 <= 0) return 1;
    return 28;
}

int func366(int var811) {
    if (var811 <= 0) return 1;
    return 53;
}


int main() {
    int var418 = 0;
    while (var418 < 13) {
        var418 += 3;
        var418++;
    }    for (int var250 = 0; var250 < 14; var250++) {
        var250 += 3;
    }    int var255 = 0;
    while (var255 < 12) {
        var255 += 5;
        var255++;
    }

    int var339 = 65;
    if (var339 % 2 == 0) {
        printf("var339 is even\n");
    } else {
        printf("var339 is odd\n");
    }

    int var683 = 100;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    return 0;
}
