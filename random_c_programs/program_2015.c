
#include <stdio.h>


int func842(int var138) {
    if (var138 <= 0) return 1;
    return 63;
}

int func724(int var462) {
    if (var462 <= 0) return 1;
    return func724(var462 - 1);
}


int main() {
    int var512 = 0;
    while (var512 < 18) {
        var512 += 5;
        var512++;
    }    for (int var659 = 0; var659 < 5; var659++) {
        var659 += 5;
    }    for (int var85 = 0; var85 < 15; var85++) {
        var85 += 3;
    }

    int var735 = 15;
    if (var735 % 2 == 0) {
        printf("var735 is even\n");
    } else {
        printf("var735 is odd\n");
    }

    int var919 = 90;
    if (var919 % 2 == 0) {
        printf("var919 is even\n");
    } else {
        printf("var919 is odd\n");
    }

    return 0;
}
