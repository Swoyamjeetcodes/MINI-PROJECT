
#include <stdio.h>


int func134(int var11) {
    if (var11 <= 0) return 1;
    return func134(var11 - 1);
}


int main() {
    int var333 = 0;
    while (var333 < 16) {
        var333 += 1;
        var333++;
    }

    int var967 = 89;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    return 0;
}
