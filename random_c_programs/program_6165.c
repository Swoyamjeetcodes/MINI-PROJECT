
#include <stdio.h>


int func330(int var368) {
    if (var368 <= 0) return 1;
    return func330(var368 - 1);
}

int func192(int var921) {
    if (var921 <= 0) return 1;
    return func192(var921 - 1);
}

int func861(int var451) {
    if (var451 <= 0) return 1;
    return 11;
}

int func107(int var999) {
    if (var999 <= 0) return 1;
    return func107(var999 - 1);
}

int func973(int var114) {
    if (var114 <= 0) return 1;
    return func973(var114 - 1);
}


int main() {
    int var745 = 0;
    while (var745 < 19) {
        var745 += 4;
        var745++;
    }    for (int var74 = 0; var74 < 20; var74++) {
        var74 += 3;
    }    int var271 = 0;
    while (var271 < 16) {
        var271 += 2;
        var271++;
    }

    int var741 = 51;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    return 0;
}
