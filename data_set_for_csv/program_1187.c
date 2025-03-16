
#include <stdio.h>


int func559(int var504) {
    if (var504 <= 0) return 1;
    return func559(var504 - 1);
}


int main() {
    int var613 = 0;
    while (var613 < 7) {
        var613 += 4;
        var613++;
    }

    int var603 = 95;
    if (var603 % 2 == 0) {
        printf("var603 is even\n");
    } else {
        printf("var603 is odd\n");
    }

    return 0;
}
