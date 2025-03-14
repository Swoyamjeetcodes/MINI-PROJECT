
#include <stdio.h>


int func434(int var763) {
    if (var763 <= 0) return 1;
    return func434(var763 - 1);
}


int main() {
    int var793 = 0;
    while (var793 < 12) {
        var793 += 3;
        var793++;
    }

    int var472 = 16;
    if (var472 % 2 == 0) {
        printf("var472 is even\n");
    } else {
        printf("var472 is odd\n");
    }

    return 0;
}
