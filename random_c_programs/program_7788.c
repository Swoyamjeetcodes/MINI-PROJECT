
#include <stdio.h>


int func94(int var286) {
    if (var286 <= 0) return 1;
    return func94(var286 - 1);
}

int func781(int var145) {
    if (var145 <= 0) return 1;
    return 18;
}

int func174(int var406) {
    if (var406 <= 0) return 1;
    return 4;
}

int func942(int var747) {
    if (var747 <= 0) return 1;
    return func942(var747 - 1);
}


int main() {
    for (int var6 = 0; var6 < 17; var6++) {
        var6 += 2;
    }    for (int var472 = 0; var472 < 20; var472++) {
        var472 += 3;
    }

    int var273 = 86;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    int var518 = 90;
    if (var518 % 2 == 0) {
        printf("var518 is even\n");
    } else {
        printf("var518 is odd\n");
    }

    int var474 = 63;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    return 0;
}
