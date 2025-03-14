
#include <stdio.h>


int func989(int var821) {
    if (var821 <= 0) return 1;
    return func989(var821 - 1);
}

int func913(int var517) {
    if (var517 <= 0) return 1;
    return 15;
}

int func987(int var153) {
    if (var153 <= 0) return 1;
    return 80;
}

int func414(int var443) {
    if (var443 <= 0) return 1;
    return func414(var443 - 1);
}


int main() {
    for (int var261 = 0; var261 < 13; var261++) {
        var261 += 1;
    }    for (int var333 = 0; var333 < 8; var333++) {
        var333 += 5;
    }

    int var565 = 6;
    if (var565 % 2 == 0) {
        printf("var565 is even\n");
    } else {
        printf("var565 is odd\n");
    }

    int var186 = 69;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    int var858 = 26;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    return 0;
}
