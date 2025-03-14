
#include <stdio.h>


int func714(int var923) {
    if (var923 <= 0) return 1;
    return 15;
}

int func457(int var255) {
    if (var255 <= 0) return 1;
    return func457(var255 - 1);
}

int func961(int var917) {
    if (var917 <= 0) return 1;
    return func961(var917 - 1);
}

int func250(int var853) {
    if (var853 <= 0) return 1;
    return 12;
}

int func609(int var711) {
    if (var711 <= 0) return 1;
    return 4;
}

int func673(int var144) {
    if (var144 <= 0) return 1;
    return 35;
}

int func823(int var951) {
    if (var951 <= 0) return 1;
    return func823(var951 - 1);
}


int main() {
    for (int var685 = 0; var685 < 9; var685++) {
        var685 += 2;
    }    int var684 = 0;
    while (var684 < 20) {
        var684 += 3;
        var684++;
    }

    int var621 = 50;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    return 0;
}
