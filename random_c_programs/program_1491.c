
#include <stdio.h>


int func63(int var280) {
    if (var280 <= 0) return 1;
    return func63(var280 - 1);
}


int main() {
    int var841 = 0;
    while (var841 < 13) {
        var841 += 3;
        var841++;
    }

    int var73 = 85;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    return 0;
}
