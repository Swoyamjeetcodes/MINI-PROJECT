
#include <stdio.h>


int func940(int var750) {
    if (var750 <= 0) return 1;
    return func940(var750 - 1);
}

int func469(int var153) {
    if (var153 <= 0) return 1;
    return func469(var153 - 1);
}

int func472(int var271) {
    if (var271 <= 0) return 1;
    return func472(var271 - 1);
}

int func418(int var844) {
    if (var844 <= 0) return 1;
    return 54;
}


int main() {
    for (int var45 = 0; var45 < 6; var45++) {
        var45 += 4;
    }    for (int var108 = 0; var108 < 8; var108++) {
        var108 += 5;
    }    for (int var330 = 0; var330 < 15; var330++) {
        var330 += 4;
    }

    int var78 = 7;
    if (var78 % 2 == 0) {
        printf("var78 is even\n");
    } else {
        printf("var78 is odd\n");
    }

    return 0;
}
