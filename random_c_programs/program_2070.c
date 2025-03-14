
#include <stdio.h>


int func309(int var646) {
    if (var646 <= 0) return 1;
    return func309(var646 - 1);
}

int func762(int var767) {
    if (var767 <= 0) return 1;
    return 15;
}

int func21(int var535) {
    if (var535 <= 0) return 1;
    return func21(var535 - 1);
}

int func993(int var583) {
    if (var583 <= 0) return 1;
    return func993(var583 - 1);
}

int func16(int var563) {
    if (var563 <= 0) return 1;
    return func16(var563 - 1);
}

int func884(int var470) {
    if (var470 <= 0) return 1;
    return func884(var470 - 1);
}

int func412(int var941) {
    if (var941 <= 0) return 1;
    return 32;
}

int func225(int var512) {
    if (var512 <= 0) return 1;
    return 39;
}

int func447(int var39) {
    if (var39 <= 0) return 1;
    return 73;
}

int func602(int var364) {
    if (var364 <= 0) return 1;
    return func602(var364 - 1);
}


int main() {
    for (int var594 = 0; var594 < 16; var594++) {
        var594 += 4;
    }

    int var982 = 1;
    if (var982 % 2 == 0) {
        printf("var982 is even\n");
    } else {
        printf("var982 is odd\n");
    }

    return 0;
}
