
#include <stdio.h>


int func792(int var445) {
    if (var445 <= 0) return 1;
    return func792(var445 - 1);
}

int func716(int var27) {
    if (var27 <= 0) return 1;
    return func716(var27 - 1);
}


int main() {
    for (int var929 = 0; var929 < 8; var929++) {
        var929 += 3;
    }    int var183 = 0;
    while (var183 < 8) {
        var183 += 3;
        var183++;
    }

    int var548 = 52;
    if (var548 % 2 == 0) {
        printf("var548 is even\n");
    } else {
        printf("var548 is odd\n");
    }

    return 0;
}
