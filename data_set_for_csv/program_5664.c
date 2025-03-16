
#include <stdio.h>


int func709(int var73) {
    if (var73 <= 0) return 1;
    return func709(var73 - 1);
}

int func1(int var128) {
    if (var128 <= 0) return 1;
    return 47;
}

int func963(int var70) {
    if (var70 <= 0) return 1;
    return 50;
}


int main() {
    for (int var799 = 0; var799 < 9; var799++) {
        var799 += 2;
    }

    int var42 = 28;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    int var330 = 33;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    return 0;
}
