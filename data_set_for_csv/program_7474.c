
#include <stdio.h>


int func251(int var959) {
    if (var959 <= 0) return 1;
    return func251(var959 - 1);
}

int func115(int var482) {
    if (var482 <= 0) return 1;
    return func115(var482 - 1);
}


int main() {
    for (int var996 = 0; var996 < 20; var996++) {
        var996 += 2;
    }    int var351 = 0;
    while (var351 < 16) {
        var351 += 1;
        var351++;
    }

    int var272 = 39;
    if (var272 % 2 == 0) {
        printf("var272 is even\n");
    } else {
        printf("var272 is odd\n");
    }

    return 0;
}
