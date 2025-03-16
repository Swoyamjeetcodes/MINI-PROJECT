
#include <stdio.h>


int func224(int var599) {
    if (var599 <= 0) return 1;
    return func224(var599 - 1);
}

int func362(int var232) {
    if (var232 <= 0) return 1;
    return 75;
}

int func251(int var789) {
    if (var789 <= 0) return 1;
    return 49;
}

int func188(int var64) {
    if (var64 <= 0) return 1;
    return func188(var64 - 1);
}

int func628(int var456) {
    if (var456 <= 0) return 1;
    return func628(var456 - 1);
}


int main() {
    for (int var909 = 0; var909 < 19; var909++) {
        var909 += 5;
    }    int var94 = 0;
    while (var94 < 15) {
        var94 += 2;
        var94++;
    }

    int var54 = 41;
    if (var54 % 2 == 0) {
        printf("var54 is even\n");
    } else {
        printf("var54 is odd\n");
    }

    return 0;
}
