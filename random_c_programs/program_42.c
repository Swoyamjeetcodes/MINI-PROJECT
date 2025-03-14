
#include <stdio.h>


int func815(int var775) {
    if (var775 <= 0) return 1;
    return func815(var775 - 1);
}

int func806(int var883) {
    if (var883 <= 0) return 1;
    return 40;
}

int func272(int var726) {
    if (var726 <= 0) return 1;
    return func272(var726 - 1);
}

int func781(int var142) {
    if (var142 <= 0) return 1;
    return func781(var142 - 1);
}

int func455(int var693) {
    if (var693 <= 0) return 1;
    return 38;
}


int main() {
    for (int var932 = 0; var932 < 14; var932++) {
        var932 += 5;
    }    int var370 = 0;
    while (var370 < 6) {
        var370 += 2;
        var370++;
    }    for (int var740 = 0; var740 < 20; var740++) {
        var740 += 5;
    }    int var259 = 0;
    while (var259 < 16) {
        var259 += 3;
        var259++;
    }    for (int var141 = 0; var141 < 14; var141++) {
        var141 += 2;
    }    for (int var541 = 0; var541 < 17; var541++) {
        var541 += 2;
    }    int var104 = 0;
    while (var104 < 14) {
        var104 += 3;
        var104++;
    }

    int var107 = 5;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    return 0;
}
