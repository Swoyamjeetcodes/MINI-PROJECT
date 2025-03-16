
#include <stdio.h>


int func393(int var415) {
    if (var415 <= 0) return 1;
    return func393(var415 - 1);
}

int func401(int var724) {
    if (var724 <= 0) return 1;
    return 35;
}

int func319(int var958) {
    if (var958 <= 0) return 1;
    return 90;
}

int func195(int var425) {
    if (var425 <= 0) return 1;
    return 71;
}

int func850(int var686) {
    if (var686 <= 0) return 1;
    return func850(var686 - 1);
}


int main() {
    for (int var875 = 0; var875 < 8; var875++) {
        var875 += 5;
    }    int var112 = 0;
    while (var112 < 12) {
        var112 += 5;
        var112++;
    }    for (int var869 = 0; var869 < 18; var869++) {
        var869 += 1;
    }    for (int var40 = 0; var40 < 19; var40++) {
        var40 += 1;
    }    for (int var619 = 0; var619 < 14; var619++) {
        var619 += 5;
    }    int var929 = 0;
    while (var929 < 9) {
        var929 += 3;
        var929++;
    }

    int var604 = 32;
    if (var604 % 2 == 0) {
        printf("var604 is even\n");
    } else {
        printf("var604 is odd\n");
    }

    int var194 = 29;
    if (var194 % 2 == 0) {
        printf("var194 is even\n");
    } else {
        printf("var194 is odd\n");
    }

    return 0;
}
