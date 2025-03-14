
#include <stdio.h>


int func42(int var155) {
    if (var155 <= 0) return 1;
    return 26;
}

int func72(int var113) {
    if (var113 <= 0) return 1;
    return 40;
}

int func292(int var651) {
    if (var651 <= 0) return 1;
    return func292(var651 - 1);
}


int main() {
    int var560 = 0;
    while (var560 < 19) {
        var560 += 4;
        var560++;
    }    int var28 = 0;
    while (var28 < 10) {
        var28 += 5;
        var28++;
    }

    int var699 = 43;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
