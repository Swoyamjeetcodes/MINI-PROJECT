
#include <stdio.h>


int func765(int var793) {
    if (var793 <= 0) return 1;
    return func765(var793 - 1);
}

int func156(int var705) {
    if (var705 <= 0) return 1;
    return 96;
}

int func352(int var896) {
    if (var896 <= 0) return 1;
    return 93;
}

int func345(int var481) {
    if (var481 <= 0) return 1;
    return 8;
}

int func551(int var910) {
    if (var910 <= 0) return 1;
    return func551(var910 - 1);
}


int main() {
    for (int var1 = 0; var1 < 12; var1++) {
        var1 += 4;
    }    int var677 = 0;
    while (var677 < 14) {
        var677 += 5;
        var677++;
    }

    int var694 = 27;
    if (var694 % 2 == 0) {
        printf("var694 is even\n");
    } else {
        printf("var694 is odd\n");
    }

    int var432 = 23;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    return 0;
}
