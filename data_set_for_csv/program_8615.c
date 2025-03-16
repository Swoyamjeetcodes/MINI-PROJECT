
#include <stdio.h>


int func582(int var789) {
    if (var789 <= 0) return 1;
    return 30;
}

int func396(int var281) {
    if (var281 <= 0) return 1;
    return func396(var281 - 1);
}


int main() {
    int var3 = 0;
    while (var3 < 18) {
        var3 += 2;
        var3++;
    }    for (int var263 = 0; var263 < 8; var263++) {
        var263 += 4;
    }    for (int var777 = 0; var777 < 5; var777++) {
        var777 += 3;
    }

    int var373 = 75;
    if (var373 % 2 == 0) {
        printf("var373 is even\n");
    } else {
        printf("var373 is odd\n");
    }

    return 0;
}
