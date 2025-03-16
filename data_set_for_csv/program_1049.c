
#include <stdio.h>


int func782(int var939) {
    if (var939 <= 0) return 1;
    return func782(var939 - 1);
}


int main() {
    int var593 = 0;
    while (var593 < 17) {
        var593 += 3;
        var593++;
    }

    int var788 = 17;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    return 0;
}
