
#include <stdio.h>


int func819(int var871) {
    if (var871 <= 0) return 1;
    return func819(var871 - 1);
}


int main() {
    int var988 = 0;
    while (var988 < 12) {
        var988 += 3;
        var988++;
    }

    int var835 = 20;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    return 0;
}
