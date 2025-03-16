
#include <stdio.h>


int func4(int var780) {
    if (var780 <= 0) return 1;
    return func4(var780 - 1);
}


int main() {
    int var769 = 0;
    while (var769 < 16) {
        var769 += 1;
        var769++;
    }    int var376 = 0;
    while (var376 < 12) {
        var376 += 1;
        var376++;
    }

    int var68 = 31;
    if (var68 % 2 == 0) {
        printf("var68 is even\n");
    } else {
        printf("var68 is odd\n");
    }

    return 0;
}
