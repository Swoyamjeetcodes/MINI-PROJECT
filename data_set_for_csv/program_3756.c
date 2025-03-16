
#include <stdio.h>


int func117(int var1000) {
    if (var1000 <= 0) return 1;
    return func117(var1000 - 1);
}

int func887(int var143) {
    if (var143 <= 0) return 1;
    return func887(var143 - 1);
}

int func433(int var52) {
    if (var52 <= 0) return 1;
    return func433(var52 - 1);
}

int func250(int var149) {
    if (var149 <= 0) return 1;
    return 36;
}


int main() {
    int var448 = 0;
    while (var448 < 5) {
        var448 += 4;
        var448++;
    }    int var997 = 0;
    while (var997 < 15) {
        var997 += 1;
        var997++;
    }    for (int var378 = 0; var378 < 16; var378++) {
        var378 += 5;
    }

    int var385 = 76;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    return 0;
}
