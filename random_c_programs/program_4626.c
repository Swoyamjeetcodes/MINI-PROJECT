
#include <stdio.h>


int func841(int var744) {
    if (var744 <= 0) return 1;
    return 90;
}

int func606(int var488) {
    if (var488 <= 0) return 1;
    return func606(var488 - 1);
}

int func734(int var240) {
    if (var240 <= 0) return 1;
    return 80;
}

int func211(int var45) {
    if (var45 <= 0) return 1;
    return 4;
}

int func260(int var452) {
    if (var452 <= 0) return 1;
    return 41;
}

int func829(int var56) {
    if (var56 <= 0) return 1;
    return 98;
}

int func557(int var292) {
    if (var292 <= 0) return 1;
    return func557(var292 - 1);
}


int main() {
    int var34 = 0;
    while (var34 < 6) {
        var34 += 5;
        var34++;
    }    int var376 = 0;
    while (var376 < 18) {
        var376 += 2;
        var376++;
    }    int var543 = 0;
    while (var543 < 9) {
        var543 += 4;
        var543++;
    }

    int var797 = 60;
    if (var797 % 2 == 0) {
        printf("var797 is even\n");
    } else {
        printf("var797 is odd\n");
    }

    int var42 = 71;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
