
#include <stdio.h>


int func967(int var346) {
    if (var346 <= 0) return 1;
    return func967(var346 - 1);
}


int main() {
    int var228 = 0;
    while (var228 < 10) {
        var228 += 4;
        var228++;
    }

    int var699 = 35;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
