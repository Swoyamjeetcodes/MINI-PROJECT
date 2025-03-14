
#include <stdio.h>


int func991(int var820) {
    if (var820 <= 0) return 1;
    return 80;
}

int func472(int var585) {
    if (var585 <= 0) return 1;
    return func472(var585 - 1);
}

int func458(int var525) {
    if (var525 <= 0) return 1;
    return func458(var525 - 1);
}

int func924(int var501) {
    if (var501 <= 0) return 1;
    return func924(var501 - 1);
}


int main() {
    for (int var646 = 0; var646 < 16; var646++) {
        var646 += 5;
    }    int var164 = 0;
    while (var164 < 8) {
        var164 += 5;
        var164++;
    }    for (int var702 = 0; var702 < 17; var702++) {
        var702 += 3;
    }

    int var839 = 19;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    return 0;
}
