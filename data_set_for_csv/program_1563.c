
#include <stdio.h>


int func428(int var125) {
    if (var125 <= 0) return 1;
    return func428(var125 - 1);
}

int func853(int var857) {
    if (var857 <= 0) return 1;
    return func853(var857 - 1);
}

int func960(int var575) {
    if (var575 <= 0) return 1;
    return func960(var575 - 1);
}

int func379(int var551) {
    if (var551 <= 0) return 1;
    return func379(var551 - 1);
}


int main() {
    for (int var392 = 0; var392 < 18; var392++) {
        var392 += 3;
    }    int var705 = 0;
    while (var705 < 14) {
        var705 += 5;
        var705++;
    }    for (int var488 = 0; var488 < 7; var488++) {
        var488 += 3;
    }

    int var428 = 84;
    if (var428 % 2 == 0) {
        printf("var428 is even\n");
    } else {
        printf("var428 is odd\n");
    }

    int var152 = 93;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    return 0;
}
