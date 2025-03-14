
#include <stdio.h>


int func211(int var776) {
    if (var776 <= 0) return 1;
    return 75;
}

int func986(int var583) {
    if (var583 <= 0) return 1;
    return func986(var583 - 1);
}


int main() {
    int var532 = 0;
    while (var532 < 9) {
        var532 += 1;
        var532++;
    }

    int var898 = 92;
    if (var898 % 2 == 0) {
        printf("var898 is even\n");
    } else {
        printf("var898 is odd\n");
    }

    int var469 = 1;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    int var474 = 8;
    if (var474 % 2 == 0) {
        printf("var474 is even\n");
    } else {
        printf("var474 is odd\n");
    }

    return 0;
}
