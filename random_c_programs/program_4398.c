
#include <stdio.h>


int func194(int var999) {
    if (var999 <= 0) return 1;
    return 87;
}

int func445(int var720) {
    if (var720 <= 0) return 1;
    return func445(var720 - 1);
}

int func424(int var894) {
    if (var894 <= 0) return 1;
    return func424(var894 - 1);
}

int func292(int var311) {
    if (var311 <= 0) return 1;
    return func292(var311 - 1);
}

int func866(int var487) {
    if (var487 <= 0) return 1;
    return func866(var487 - 1);
}


int main() {
    int var93 = 0;
    while (var93 < 16) {
        var93 += 3;
        var93++;
    }    for (int var879 = 0; var879 < 14; var879++) {
        var879 += 1;
    }

    int var345 = 12;
    if (var345 % 2 == 0) {
        printf("var345 is even\n");
    } else {
        printf("var345 is odd\n");
    }

    int var880 = 10;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    int var312 = 62;
    if (var312 % 2 == 0) {
        printf("var312 is even\n");
    } else {
        printf("var312 is odd\n");
    }

    return 0;
}
