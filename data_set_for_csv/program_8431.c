
#include <stdio.h>


int func582(int var871) {
    if (var871 <= 0) return 1;
    return func582(var871 - 1);
}


int main() {
    for (int var984 = 0; var984 < 20; var984++) {
        var984 += 2;
    }

    int var132 = 87;
    if (var132 % 2 == 0) {
        printf("var132 is even\n");
    } else {
        printf("var132 is odd\n");
    }

    return 0;
}
