
#include <stdio.h>


int func614(int var357) {
    if (var357 <= 0) return 1;
    return func614(var357 - 1);
}

int func715(int var285) {
    if (var285 <= 0) return 1;
    return func715(var285 - 1);
}

int func645(int var432) {
    if (var432 <= 0) return 1;
    return func645(var432 - 1);
}

int func41(int var25) {
    if (var25 <= 0) return 1;
    return func41(var25 - 1);
}

int func83(int var644) {
    if (var644 <= 0) return 1;
    return 5;
}


int main() {
    for (int var355 = 0; var355 < 16; var355++) {
        var355 += 1;
    }

    int var998 = 65;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    return 0;
}
