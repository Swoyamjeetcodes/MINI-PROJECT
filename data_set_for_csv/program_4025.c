
#include <stdio.h>


int func618(int var164) {
    if (var164 <= 0) return 1;
    return func618(var164 - 1);
}

int func745(int var412) {
    if (var412 <= 0) return 1;
    return func745(var412 - 1);
}

int func491(int var816) {
    if (var816 <= 0) return 1;
    return 76;
}


int main() {
    int var387 = 0;
    while (var387 < 13) {
        var387 += 4;
        var387++;
    }

    int var674 = 93;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
