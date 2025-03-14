
#include <stdio.h>


int func897(int var398) {
    if (var398 <= 0) return 1;
    return func897(var398 - 1);
}


int main() {
    int var548 = 0;
    while (var548 < 14) {
        var548 += 3;
        var548++;
    }

    int var501 = 83;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    return 0;
}
