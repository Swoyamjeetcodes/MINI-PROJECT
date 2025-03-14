
#include <stdio.h>


int func824(int var331) {
    if (var331 <= 0) return 1;
    return func824(var331 - 1);
}


int main() {
    int var529 = 0;
    while (var529 < 5) {
        var529 += 1;
        var529++;
    }

    int var934 = 94;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    return 0;
}
