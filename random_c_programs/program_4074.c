
#include <stdio.h>


int func484(int var909) {
    if (var909 <= 0) return 1;
    return 77;
}

int func355(int var314) {
    if (var314 <= 0) return 1;
    return func355(var314 - 1);
}

int func801(int var390) {
    if (var390 <= 0) return 1;
    return func801(var390 - 1);
}

int func122(int var735) {
    if (var735 <= 0) return 1;
    return func122(var735 - 1);
}

int func127(int var393) {
    if (var393 <= 0) return 1;
    return 62;
}


int main() {
    int var986 = 0;
    while (var986 < 16) {
        var986 += 3;
        var986++;
    }    for (int var776 = 0; var776 < 5; var776++) {
        var776 += 2;
    }    int var359 = 0;
    while (var359 < 8) {
        var359 += 2;
        var359++;
    }

    int var378 = 21;
    if (var378 % 2 == 0) {
        printf("var378 is even\n");
    } else {
        printf("var378 is odd\n");
    }

    int var703 = 33;
    if (var703 % 2 == 0) {
        printf("var703 is even\n");
    } else {
        printf("var703 is odd\n");
    }

    int var57 = 76;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    return 0;
}
