
#include <stdio.h>


int func551(int var56) {
    if (var56 <= 0) return 1;
    return func551(var56 - 1);
}

int func877(int var555) {
    if (var555 <= 0) return 1;
    return 52;
}

int func296(int var303) {
    if (var303 <= 0) return 1;
    return func296(var303 - 1);
}

int func890(int var440) {
    if (var440 <= 0) return 1;
    return func890(var440 - 1);
}


int main() {
    for (int var123 = 0; var123 < 16; var123++) {
        var123 += 2;
    }    int var64 = 0;
    while (var64 < 8) {
        var64 += 2;
        var64++;
    }

    int var707 = 96;
    if (var707 % 2 == 0) {
        printf("var707 is even\n");
    } else {
        printf("var707 is odd\n");
    }

    int var400 = 16;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var821 = 64;
    if (var821 % 2 == 0) {
        printf("var821 is even\n");
    } else {
        printf("var821 is odd\n");
    }

    return 0;
}
