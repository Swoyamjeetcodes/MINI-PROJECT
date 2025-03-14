
#include <stdio.h>


int func327(int var533) {
    if (var533 <= 0) return 1;
    return func327(var533 - 1);
}


int main() {
    int var263 = 0;
    while (var263 < 8) {
        var263 += 4;
        var263++;
    }

    int var234 = 93;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    return 0;
}
