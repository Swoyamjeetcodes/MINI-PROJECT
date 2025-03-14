
#include <stdio.h>


int func273(int var105) {
    if (var105 <= 0) return 1;
    return 4;
}

int func214(int var111) {
    if (var111 <= 0) return 1;
    return func214(var111 - 1);
}

int func602(int var941) {
    if (var941 <= 0) return 1;
    return func602(var941 - 1);
}


int main() {
    for (int var9 = 0; var9 < 19; var9++) {
        var9 += 1;
    }    int var792 = 0;
    while (var792 < 7) {
        var792 += 5;
        var792++;
    }    for (int var810 = 0; var810 < 15; var810++) {
        var810 += 3;
    }

    int var342 = 14;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    int var34 = 92;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    int var641 = 54;
    if (var641 % 2 == 0) {
        printf("var641 is even\n");
    } else {
        printf("var641 is odd\n");
    }

    return 0;
}
