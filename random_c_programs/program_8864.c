
#include <stdio.h>


int func182(int var703) {
    if (var703 <= 0) return 1;
    return func182(var703 - 1);
}

int func58(int var46) {
    if (var46 <= 0) return 1;
    return func58(var46 - 1);
}


int main() {
    int var723 = 0;
    while (var723 < 11) {
        var723 += 1;
        var723++;
    }    int var919 = 0;
    while (var919 < 11) {
        var919 += 5;
        var919++;
    }    for (int var6 = 0; var6 < 19; var6++) {
        var6 += 4;
    }

    int var342 = 42;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    int var518 = 76;
    if (var518 % 2 == 0) {
        printf("var518 is even\n");
    } else {
        printf("var518 is odd\n");
    }

    int var799 = 2;
    if (var799 % 2 == 0) {
        printf("var799 is even\n");
    } else {
        printf("var799 is odd\n");
    }

    return 0;
}
