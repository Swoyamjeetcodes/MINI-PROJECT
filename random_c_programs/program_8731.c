
#include <stdio.h>


int func719(int var306) {
    if (var306 <= 0) return 1;
    return 47;
}

int func607(int var524) {
    if (var524 <= 0) return 1;
    return func607(var524 - 1);
}

int func600(int var283) {
    if (var283 <= 0) return 1;
    return 89;
}

int func14(int var800) {
    if (var800 <= 0) return 1;
    return func14(var800 - 1);
}

int func515(int var253) {
    if (var253 <= 0) return 1;
    return 35;
}


int main() {
    int var581 = 0;
    while (var581 < 5) {
        var581 += 2;
        var581++;
    }    int var555 = 0;
    while (var555 < 6) {
        var555 += 5;
        var555++;
    }    int var48 = 0;
    while (var48 < 19) {
        var48 += 4;
        var48++;
    }

    int var437 = 15;
    if (var437 % 2 == 0) {
        printf("var437 is even\n");
    } else {
        printf("var437 is odd\n");
    }

    return 0;
}
