
#include <stdio.h>


int func664(int var622) {
    if (var622 <= 0) return 1;
    return func664(var622 - 1);
}

int func225(int var442) {
    if (var442 <= 0) return 1;
    return 15;
}

int func325(int var632) {
    if (var632 <= 0) return 1;
    return 2;
}

int func855(int var870) {
    if (var870 <= 0) return 1;
    return func855(var870 - 1);
}

int func555(int var595) {
    if (var595 <= 0) return 1;
    return func555(var595 - 1);
}


int main() {
    for (int var932 = 0; var932 < 8; var932++) {
        var932 += 4;
    }    for (int var887 = 0; var887 < 16; var887++) {
        var887 += 5;
    }

    int var749 = 8;
    if (var749 % 2 == 0) {
        printf("var749 is even\n");
    } else {
        printf("var749 is odd\n");
    }

    int var532 = 99;
    if (var532 % 2 == 0) {
        printf("var532 is even\n");
    } else {
        printf("var532 is odd\n");
    }

    return 0;
}
