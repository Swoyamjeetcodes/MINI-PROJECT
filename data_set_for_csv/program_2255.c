
#include <stdio.h>


int func841(int var589) {
    if (var589 <= 0) return 1;
    return func841(var589 - 1);
}

int func980(int var69) {
    if (var69 <= 0) return 1;
    return func980(var69 - 1);
}

int func87(int var848) {
    if (var848 <= 0) return 1;
    return func87(var848 - 1);
}

int func799(int var71) {
    if (var71 <= 0) return 1;
    return 68;
}

int func558(int var444) {
    if (var444 <= 0) return 1;
    return 78;
}


int main() {
    for (int var651 = 0; var651 < 17; var651++) {
        var651 += 3;
    }    int var278 = 0;
    while (var278 < 8) {
        var278 += 4;
        var278++;
    }    int var784 = 0;
    while (var784 < 20) {
        var784 += 2;
        var784++;
    }

    int var518 = 67;
    if (var518 % 2 == 0) {
        printf("var518 is even\n");
    } else {
        printf("var518 is odd\n");
    }

    int var322 = 25;
    if (var322 % 2 == 0) {
        printf("var322 is even\n");
    } else {
        printf("var322 is odd\n");
    }

    return 0;
}
