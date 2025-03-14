
#include <stdio.h>


int func434(int var142) {
    if (var142 <= 0) return 1;
    return func434(var142 - 1);
}

int func402(int var708) {
    if (var708 <= 0) return 1;
    return func402(var708 - 1);
}

int func468(int var357) {
    if (var357 <= 0) return 1;
    return func468(var357 - 1);
}

int func290(int var849) {
    if (var849 <= 0) return 1;
    return 62;
}

int func143(int var704) {
    if (var704 <= 0) return 1;
    return func143(var704 - 1);
}


int main() {
    int var717 = 0;
    while (var717 < 16) {
        var717 += 1;
        var717++;
    }

    int var917 = 71;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
