
#include <stdio.h>


int func401(int var322) {
    if (var322 <= 0) return 1;
    return func401(var322 - 1);
}

int func389(int var641) {
    if (var641 <= 0) return 1;
    return func389(var641 - 1);
}


int main() {
    int var395 = 0;
    while (var395 < 18) {
        var395 += 5;
        var395++;
    }    int var701 = 0;
    while (var701 < 8) {
        var701 += 3;
        var701++;
    }

    int var727 = 85;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    int var782 = 80;
    if (var782 % 2 == 0) {
        printf("var782 is even\n");
    } else {
        printf("var782 is odd\n");
    }

    return 0;
}
