
#include <stdio.h>


int func659(int var790) {
    if (var790 <= 0) return 1;
    return func659(var790 - 1);
}

int func322(int var209) {
    if (var209 <= 0) return 1;
    return func322(var209 - 1);
}

int func416(int var357) {
    if (var357 <= 0) return 1;
    return func416(var357 - 1);
}

int func687(int var164) {
    if (var164 <= 0) return 1;
    return func687(var164 - 1);
}

int func53(int var145) {
    if (var145 <= 0) return 1;
    return func53(var145 - 1);
}


int main() {
    int var604 = 0;
    while (var604 < 8) {
        var604 += 4;
        var604++;
    }    int var661 = 0;
    while (var661 < 20) {
        var661 += 2;
        var661++;
    }    for (int var688 = 0; var688 < 7; var688++) {
        var688 += 4;
    }

    int var597 = 47;
    if (var597 % 2 == 0) {
        printf("var597 is even\n");
    } else {
        printf("var597 is odd\n");
    }

    int var426 = 0;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    return 0;
}
