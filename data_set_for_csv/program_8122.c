
#include <stdio.h>


int func388(int var64) {
    if (var64 <= 0) return 1;
    return func388(var64 - 1);
}


int main() {
    int var499 = 0;
    while (var499 < 13) {
        var499 += 4;
        var499++;
    }

    int var164 = 25;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
