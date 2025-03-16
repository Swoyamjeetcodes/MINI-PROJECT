
#include <stdio.h>


int func929(int var430) {
    if (var430 <= 0) return 1;
    return 71;
}

int func274(int var465) {
    if (var465 <= 0) return 1;
    return func274(var465 - 1);
}

int func979(int var836) {
    if (var836 <= 0) return 1;
    return 2;
}


int main() {
    int var692 = 0;
    while (var692 < 5) {
        var692 += 5;
        var692++;
    }    for (int var889 = 0; var889 < 17; var889++) {
        var889 += 5;
    }

    int var820 = 40;
    if (var820 % 2 == 0) {
        printf("var820 is even\n");
    } else {
        printf("var820 is odd\n");
    }

    int var362 = 6;
    if (var362 % 2 == 0) {
        printf("var362 is even\n");
    } else {
        printf("var362 is odd\n");
    }

    int var475 = 83;
    if (var475 % 2 == 0) {
        printf("var475 is even\n");
    } else {
        printf("var475 is odd\n");
    }

    return 0;
}
