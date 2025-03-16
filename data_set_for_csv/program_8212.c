
#include <stdio.h>


int func75(int var146) {
    if (var146 <= 0) return 1;
    return func75(var146 - 1);
}


int main() {
    int var65 = 0;
    while (var65 < 17) {
        var65 += 4;
        var65++;
    }

    int var706 = 76;
    if (var706 % 2 == 0) {
        printf("var706 is even\n");
    } else {
        printf("var706 is odd\n");
    }

    return 0;
}
