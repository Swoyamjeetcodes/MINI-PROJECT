
#include <stdio.h>


int func429(int var171) {
    if (var171 <= 0) return 1;
    return 27;
}

int func519(int var144) {
    if (var144 <= 0) return 1;
    return 20;
}

int func297(int var749) {
    if (var749 <= 0) return 1;
    return func297(var749 - 1);
}

int func719(int var354) {
    if (var354 <= 0) return 1;
    return func719(var354 - 1);
}

int func155(int var167) {
    if (var167 <= 0) return 1;
    return 39;
}

int func789(int var384) {
    if (var384 <= 0) return 1;
    return 73;
}

int func871(int var670) {
    if (var670 <= 0) return 1;
    return func871(var670 - 1);
}

int func62(int var677) {
    if (var677 <= 0) return 1;
    return 72;
}


int main() {
    for (int var120 = 0; var120 < 6; var120++) {
        var120 += 3;
    }    for (int var780 = 0; var780 < 9; var780++) {
        var780 += 3;
    }

    int var980 = 29;
    if (var980 % 2 == 0) {
        printf("var980 is even\n");
    } else {
        printf("var980 is odd\n");
    }

    int var245 = 6;
    if (var245 % 2 == 0) {
        printf("var245 is even\n");
    } else {
        printf("var245 is odd\n");
    }

    return 0;
}
