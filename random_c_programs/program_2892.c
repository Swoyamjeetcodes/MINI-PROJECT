
#include <stdio.h>


int func616(int var710) {
    if (var710 <= 0) return 1;
    return func616(var710 - 1);
}

int func414(int var917) {
    if (var917 <= 0) return 1;
    return 65;
}

int func708(int var850) {
    if (var850 <= 0) return 1;
    return 29;
}


int main() {
    int var569 = 0;
    while (var569 < 6) {
        var569 += 4;
        var569++;
    }

    int var28 = 42;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    return 0;
}
