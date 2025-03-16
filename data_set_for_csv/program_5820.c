
#include <stdio.h>


int func75(int var414) {
    if (var414 <= 0) return 1;
    return 20;
}

int func866(int var317) {
    if (var317 <= 0) return 1;
    return 55;
}

int func624(int var208) {
    if (var208 <= 0) return 1;
    return 22;
}

int func541(int var117) {
    if (var117 <= 0) return 1;
    return func541(var117 - 1);
}

int func799(int var354) {
    if (var354 <= 0) return 1;
    return func799(var354 - 1);
}


int main() {
    for (int var17 = 0; var17 < 11; var17++) {
        var17 += 4;
    }    int var621 = 0;
    while (var621 < 9) {
        var621 += 5;
        var621++;
    }    for (int var752 = 0; var752 < 17; var752++) {
        var752 += 3;
    }

    int var853 = 82;
    if (var853 % 2 == 0) {
        printf("var853 is even\n");
    } else {
        printf("var853 is odd\n");
    }

    int var934 = 70;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    int var899 = 78;
    if (var899 % 2 == 0) {
        printf("var899 is even\n");
    } else {
        printf("var899 is odd\n");
    }

    return 0;
}
