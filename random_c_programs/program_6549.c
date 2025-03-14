
#include <stdio.h>


int func397(int var21) {
    if (var21 <= 0) return 1;
    return 90;
}

int func910(int var413) {
    if (var413 <= 0) return 1;
    return func910(var413 - 1);
}

int func327(int var23) {
    if (var23 <= 0) return 1;
    return 86;
}


int main() {
    int var928 = 0;
    while (var928 < 16) {
        var928 += 4;
        var928++;
    }

    int var761 = 35;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    int var255 = 76;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    return 0;
}
