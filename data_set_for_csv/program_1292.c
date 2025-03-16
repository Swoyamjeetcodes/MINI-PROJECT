
#include <stdio.h>


int func412(int var258) {
    if (var258 <= 0) return 1;
    return func412(var258 - 1);
}


int main() {
    int var464 = 0;
    while (var464 < 20) {
        var464 += 1;
        var464++;
    }

    int var212 = 87;
    if (var212 % 2 == 0) {
        printf("var212 is even\n");
    } else {
        printf("var212 is odd\n");
    }

    return 0;
}
