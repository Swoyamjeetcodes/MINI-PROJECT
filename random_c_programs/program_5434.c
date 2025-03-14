
#include <stdio.h>


int func603(int var917) {
    if (var917 <= 0) return 1;
    return 28;
}

int func992(int var592) {
    if (var592 <= 0) return 1;
    return func992(var592 - 1);
}

int func98(int var513) {
    if (var513 <= 0) return 1;
    return func98(var513 - 1);
}

int func406(int var446) {
    if (var446 <= 0) return 1;
    return func406(var446 - 1);
}


int main() {
    int var227 = 0;
    while (var227 < 20) {
        var227 += 3;
        var227++;
    }    for (int var201 = 0; var201 < 7; var201++) {
        var201 += 4;
    }

    int var896 = 63;
    if (var896 % 2 == 0) {
        printf("var896 is even\n");
    } else {
        printf("var896 is odd\n");
    }

    return 0;
}
