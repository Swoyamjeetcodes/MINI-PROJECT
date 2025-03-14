
#include <stdio.h>


int func825(int var305) {
    if (var305 <= 0) return 1;
    return 15;
}

int func263(int var992) {
    if (var992 <= 0) return 1;
    return 3;
}

int func880(int var905) {
    if (var905 <= 0) return 1;
    return func880(var905 - 1);
}


int main() {
    int var189 = 0;
    while (var189 < 9) {
        var189 += 4;
        var189++;
    }    for (int var920 = 0; var920 < 14; var920++) {
        var920 += 3;
    }

    int var33 = 13;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    return 0;
}
