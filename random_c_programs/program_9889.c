
#include <stdio.h>


int func816(int var23) {
    if (var23 <= 0) return 1;
    return func816(var23 - 1);
}


int main() {
    for (int var665 = 0; var665 < 18; var665++) {
        var665 += 3;
    }

    int var780 = 2;
    if (var780 % 2 == 0) {
        printf("var780 is even\n");
    } else {
        printf("var780 is odd\n");
    }

    return 0;
}
