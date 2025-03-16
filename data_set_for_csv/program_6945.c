
#include <stdio.h>


int func579(int var270) {
    if (var270 <= 0) return 1;
    return 95;
}

int func923(int var898) {
    if (var898 <= 0) return 1;
    return func923(var898 - 1);
}

int func416(int var111) {
    if (var111 <= 0) return 1;
    return func416(var111 - 1);
}

int func186(int var840) {
    if (var840 <= 0) return 1;
    return func186(var840 - 1);
}

int func371(int var864) {
    if (var864 <= 0) return 1;
    return func371(var864 - 1);
}


int main() {
    for (int var783 = 0; var783 < 17; var783++) {
        var783 += 4;
    }    for (int var833 = 0; var833 < 18; var833++) {
        var833 += 1;
    }

    int var665 = 30;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    int var857 = 99;
    if (var857 % 2 == 0) {
        printf("var857 is even\n");
    } else {
        printf("var857 is odd\n");
    }

    return 0;
}
