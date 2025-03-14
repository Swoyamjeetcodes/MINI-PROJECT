
#include <stdio.h>


int func684(int var568) {
    if (var568 <= 0) return 1;
    return 6;
}

int func835(int var70) {
    if (var70 <= 0) return 1;
    return func835(var70 - 1);
}

int func716(int var139) {
    if (var139 <= 0) return 1;
    return func716(var139 - 1);
}

int func215(int var601) {
    if (var601 <= 0) return 1;
    return 87;
}

int func421(int var718) {
    if (var718 <= 0) return 1;
    return 36;
}


int main() {
    int var751 = 0;
    while (var751 < 8) {
        var751 += 3;
        var751++;
    }

    int var88 = 67;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    return 0;
}
