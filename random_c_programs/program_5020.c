
#include <stdio.h>


int func781(int var793) {
    if (var793 <= 0) return 1;
    return func781(var793 - 1);
}


int main() {
    int var460 = 0;
    while (var460 < 7) {
        var460 += 3;
        var460++;
    }

    int var109 = 47;
    if (var109 % 2 == 0) {
        printf("var109 is even\n");
    } else {
        printf("var109 is odd\n");
    }

    return 0;
}
