
#include <stdio.h>


int func325(int var159) {
    if (var159 <= 0) return 1;
    return func325(var159 - 1);
}


int main() {
    int var89 = 0;
    while (var89 < 6) {
        var89 += 4;
        var89++;
    }

    int var212 = 63;
    if (var212 % 2 == 0) {
        printf("var212 is even\n");
    } else {
        printf("var212 is odd\n");
    }

    return 0;
}
