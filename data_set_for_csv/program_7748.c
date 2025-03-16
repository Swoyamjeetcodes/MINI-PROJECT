
#include <stdio.h>


int func320(int var327) {
    if (var327 <= 0) return 1;
    return func320(var327 - 1);
}

int func436(int var274) {
    if (var274 <= 0) return 1;
    return func436(var274 - 1);
}

int func321(int var645) {
    if (var645 <= 0) return 1;
    return func321(var645 - 1);
}

int func75(int var385) {
    if (var385 <= 0) return 1;
    return 35;
}


int main() {
    int var729 = 0;
    while (var729 < 14) {
        var729 += 2;
        var729++;
    }    int var79 = 0;
    while (var79 < 16) {
        var79 += 3;
        var79++;
    }    for (int var113 = 0; var113 < 5; var113++) {
        var113 += 5;
    }    int var91 = 0;
    while (var91 < 13) {
        var91 += 4;
        var91++;
    }    for (int var314 = 0; var314 < 14; var314++) {
        var314 += 2;
    }    for (int var838 = 0; var838 < 12; var838++) {
        var838 += 5;
    }    for (int var757 = 0; var757 < 6; var757++) {
        var757 += 3;
    }

    int var158 = 11;
    if (var158 % 2 == 0) {
        printf("var158 is even\n");
    } else {
        printf("var158 is odd\n");
    }

    int var42 = 13;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
