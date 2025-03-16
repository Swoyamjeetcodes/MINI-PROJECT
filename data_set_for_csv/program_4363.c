
#include <stdio.h>


int func560(int var225) {
    if (var225 <= 0) return 1;
    return func560(var225 - 1);
}

int func893(int var669) {
    if (var669 <= 0) return 1;
    return func893(var669 - 1);
}

int func534(int var490) {
    if (var490 <= 0) return 1;
    return 96;
}


int main() {
    for (int var385 = 0; var385 < 16; var385++) {
        var385 += 1;
    }    int var505 = 0;
    while (var505 < 19) {
        var505 += 4;
        var505++;
    }

    int var383 = 39;
    if (var383 % 2 == 0) {
        printf("var383 is even\n");
    } else {
        printf("var383 is odd\n");
    }

    return 0;
}
