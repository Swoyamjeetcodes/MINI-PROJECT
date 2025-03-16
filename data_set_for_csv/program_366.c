
#include <stdio.h>


int func874(int var431) {
    if (var431 <= 0) return 1;
    return func874(var431 - 1);
}

int func282(int var676) {
    if (var676 <= 0) return 1;
    return func282(var676 - 1);
}

int func48(int var120) {
    if (var120 <= 0) return 1;
    return 48;
}

int func824(int var596) {
    if (var596 <= 0) return 1;
    return 97;
}


int main() {
    int var488 = 0;
    while (var488 < 20) {
        var488 += 3;
        var488++;
    }    for (int var145 = 0; var145 < 14; var145++) {
        var145 += 3;
    }

    int var627 = 35;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    int var244 = 9;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    return 0;
}
