
#include <stdio.h>


int func106(int var261) {
    if (var261 <= 0) return 1;
    return 36;
}

int func313(int var225) {
    if (var225 <= 0) return 1;
    return 4;
}

int func70(int var943) {
    if (var943 <= 0) return 1;
    return func70(var943 - 1);
}

int func762(int var62) {
    if (var62 <= 0) return 1;
    return 26;
}

int func193(int var264) {
    if (var264 <= 0) return 1;
    return func193(var264 - 1);
}


int main() {
    for (int var925 = 0; var925 < 12; var925++) {
        var925 += 1;
    }

    int var869 = 28;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    int var590 = 74;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    int var643 = 77;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    return 0;
}
