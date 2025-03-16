
#include <stdio.h>


int func352(int var322) {
    if (var322 <= 0) return 1;
    return func352(var322 - 1);
}

int func165(int var622) {
    if (var622 <= 0) return 1;
    return 32;
}

int func369(int var341) {
    if (var341 <= 0) return 1;
    return 45;
}

int func937(int var746) {
    if (var746 <= 0) return 1;
    return func937(var746 - 1);
}


int main() {
    for (int var116 = 0; var116 < 14; var116++) {
        var116 += 5;
    }    for (int var960 = 0; var960 < 8; var960++) {
        var960 += 1;
    }

    int var36 = 100;
    if (var36 % 2 == 0) {
        printf("var36 is even\n");
    } else {
        printf("var36 is odd\n");
    }

    int var123 = 8;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    return 0;
}
