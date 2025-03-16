
#include <stdio.h>


int func292(int var891) {
    if (var891 <= 0) return 1;
    return func292(var891 - 1);
}

int func80(int var357) {
    if (var357 <= 0) return 1;
    return func80(var357 - 1);
}

int func528(int var623) {
    if (var623 <= 0) return 1;
    return 85;
}

int func354(int var906) {
    if (var906 <= 0) return 1;
    return func354(var906 - 1);
}


int main() {
    int var252 = 0;
    while (var252 < 5) {
        var252 += 5;
        var252++;
    }

    int var655 = 94;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    int var222 = 44;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
