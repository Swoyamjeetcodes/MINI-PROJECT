
#include <stdio.h>


int func181(int var430) {
    if (var430 <= 0) return 1;
    return 92;
}

int func38(int var352) {
    if (var352 <= 0) return 1;
    return 30;
}

int func551(int var786) {
    if (var786 <= 0) return 1;
    return 2;
}

int func384(int var907) {
    if (var907 <= 0) return 1;
    return func384(var907 - 1);
}

int func427(int var290) {
    if (var290 <= 0) return 1;
    return func427(var290 - 1);
}

int func174(int var24) {
    if (var24 <= 0) return 1;
    return 51;
}


int main() {
    for (int var888 = 0; var888 < 8; var888++) {
        var888 += 4;
    }    int var614 = 0;
    while (var614 < 5) {
        var614 += 2;
        var614++;
    }    int var295 = 0;
    while (var295 < 5) {
        var295 += 1;
        var295++;
    }

    int var850 = 23;
    if (var850 % 2 == 0) {
        printf("var850 is even\n");
    } else {
        printf("var850 is odd\n");
    }

    int var516 = 7;
    if (var516 % 2 == 0) {
        printf("var516 is even\n");
    } else {
        printf("var516 is odd\n");
    }

    int var238 = 8;
    if (var238 % 2 == 0) {
        printf("var238 is even\n");
    } else {
        printf("var238 is odd\n");
    }

    return 0;
}
