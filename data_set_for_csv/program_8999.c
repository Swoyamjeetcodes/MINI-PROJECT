
#include <stdio.h>


int func18(int var195) {
    if (var195 <= 0) return 1;
    return 72;
}

int func843(int var42) {
    if (var42 <= 0) return 1;
    return 25;
}

int func611(int var341) {
    if (var341 <= 0) return 1;
    return 22;
}

int func176(int var484) {
    if (var484 <= 0) return 1;
    return func176(var484 - 1);
}

int func861(int var721) {
    if (var721 <= 0) return 1;
    return 60;
}


int main() {
    for (int var963 = 0; var963 < 6; var963++) {
        var963 += 3;
    }    for (int var544 = 0; var544 < 7; var544++) {
        var544 += 4;
    }    int var245 = 0;
    while (var245 < 15) {
        var245 += 3;
        var245++;
    }

    int var82 = 16;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    int var999 = 11;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    int var315 = 100;
    if (var315 % 2 == 0) {
        printf("var315 is even\n");
    } else {
        printf("var315 is odd\n");
    }

    return 0;
}
