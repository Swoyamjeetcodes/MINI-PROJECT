
#include <stdio.h>


int func782(int var516) {
    if (var516 <= 0) return 1;
    return func782(var516 - 1);
}


int main() {
    for (int var149 = 0; var149 < 20; var149++) {
        var149 += 2;
    }

    int var608 = 13;
    if (var608 % 2 == 0) {
        printf("var608 is even\n");
    } else {
        printf("var608 is odd\n");
    }

    return 0;
}
