
#include <stdio.h>


int func924(int var948) {
    if (var948 <= 0) return 1;
    return func924(var948 - 1);
}

int func492(int var61) {
    if (var61 <= 0) return 1;
    return 55;
}

int func579(int var338) {
    if (var338 <= 0) return 1;
    return 68;
}


int main() {
    for (int var522 = 0; var522 < 6; var522++) {
        var522 += 5;
    }    for (int var778 = 0; var778 < 13; var778++) {
        var778 += 5;
    }    int var397 = 0;
    while (var397 < 7) {
        var397 += 5;
        var397++;
    }

    int var621 = 4;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    int var94 = 97;
    if (var94 % 2 == 0) {
        printf("var94 is even\n");
    } else {
        printf("var94 is odd\n");
    }

    int var301 = 46;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    return 0;
}
