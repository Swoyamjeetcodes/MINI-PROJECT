
#include <stdio.h>


int func208(int var438) {
    if (var438 <= 0) return 1;
    return func208(var438 - 1);
}


int main() {
    int var894 = 0;
    while (var894 < 7) {
        var894 += 3;
        var894++;
    }

    int var946 = 97;
    if (var946 % 2 == 0) {
        printf("var946 is even\n");
    } else {
        printf("var946 is odd\n");
    }

    return 0;
}
