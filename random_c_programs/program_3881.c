
#include <stdio.h>


int func170(int var305) {
    if (var305 <= 0) return 1;
    return func170(var305 - 1);
}

int func684(int var196) {
    if (var196 <= 0) return 1;
    return 82;
}

int func184(int var336) {
    if (var336 <= 0) return 1;
    return func184(var336 - 1);
}


int main() {
    int var366 = 0;
    while (var366 < 6) {
        var366 += 5;
        var366++;
    }    int var852 = 0;
    while (var852 < 12) {
        var852 += 5;
        var852++;
    }    for (int var797 = 0; var797 < 11; var797++) {
        var797 += 4;
    }

    int var530 = 43;
    if (var530 % 2 == 0) {
        printf("var530 is even\n");
    } else {
        printf("var530 is odd\n");
    }

    int var252 = 96;
    if (var252 % 2 == 0) {
        printf("var252 is even\n");
    } else {
        printf("var252 is odd\n");
    }

    return 0;
}
