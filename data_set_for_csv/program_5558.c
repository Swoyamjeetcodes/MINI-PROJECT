
#include <stdio.h>


int func515(int var75) {
    if (var75 <= 0) return 1;
    return func515(var75 - 1);
}


int main() {
    int var456 = 0;
    while (var456 < 11) {
        var456 += 2;
        var456++;
    }

    int var535 = 3;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    return 0;
}
