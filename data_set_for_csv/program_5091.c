
#include <stdio.h>


int func559(int var463) {
    if (var463 <= 0) return 1;
    return func559(var463 - 1);
}


int main() {
    int var469 = 0;
    while (var469 < 12) {
        var469 += 2;
        var469++;
    }

    int var244 = 1;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    return 0;
}
