
#include <stdio.h>


int func693(int var427) {
    if (var427 <= 0) return 1;
    return func693(var427 - 1);
}


int main() {
    int var65 = 0;
    while (var65 < 14) {
        var65 += 5;
        var65++;
    }

    int var40 = 0;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    return 0;
}
