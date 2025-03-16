
#include <stdio.h>


int func787(int var153) {
    if (var153 <= 0) return 1;
    return 6;
}

int func948(int var79) {
    if (var79 <= 0) return 1;
    return func948(var79 - 1);
}

int func167(int var633) {
    if (var633 <= 0) return 1;
    return func167(var633 - 1);
}

int func159(int var445) {
    if (var445 <= 0) return 1;
    return 9;
}


int main() {
    for (int var895 = 0; var895 < 13; var895++) {
        var895 += 2;
    }    for (int var581 = 0; var581 < 19; var581++) {
        var581 += 5;
    }

    int var627 = 88;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    int var835 = 21;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    return 0;
}
