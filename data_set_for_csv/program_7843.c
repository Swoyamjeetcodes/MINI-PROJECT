
#include <stdio.h>


int func168(int var71) {
    if (var71 <= 0) return 1;
    return 19;
}

int func161(int var83) {
    if (var83 <= 0) return 1;
    return func161(var83 - 1);
}


int main() {
    for (int var538 = 0; var538 < 13; var538++) {
        var538 += 4;
    }    for (int var931 = 0; var931 < 20; var931++) {
        var931 += 5;
    }

    int var294 = 94;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    int var573 = 57;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    return 0;
}
