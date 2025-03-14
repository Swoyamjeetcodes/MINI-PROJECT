
#include <stdio.h>


int func391(int var597) {
    if (var597 <= 0) return 1;
    return func391(var597 - 1);
}


int main() {
    int var855 = 0;
    while (var855 < 14) {
        var855 += 5;
        var855++;
    }

    int var313 = 35;
    if (var313 % 2 == 0) {
        printf("var313 is even\n");
    } else {
        printf("var313 is odd\n");
    }

    return 0;
}
