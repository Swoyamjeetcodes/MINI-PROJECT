
#include <stdio.h>


int func256(int var939) {
    if (var939 <= 0) return 1;
    return func256(var939 - 1);
}

int func79(int var472) {
    if (var472 <= 0) return 1;
    return 60;
}


int main() {
    for (int var668 = 0; var668 < 18; var668++) {
        var668 += 5;
    }    for (int var389 = 0; var389 < 19; var389++) {
        var389 += 1;
    }    int var956 = 0;
    while (var956 < 16) {
        var956 += 2;
        var956++;
    }

    int var909 = 8;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    return 0;
}
