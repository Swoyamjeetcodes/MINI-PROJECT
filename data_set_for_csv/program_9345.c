
#include <stdio.h>


int func288(int var431) {
    if (var431 <= 0) return 1;
    return func288(var431 - 1);
}


int main() {
    int var477 = 0;
    while (var477 < 16) {
        var477 += 4;
        var477++;
    }

    int var15 = 16;
    if (var15 % 2 == 0) {
        printf("var15 is even\n");
    } else {
        printf("var15 is odd\n");
    }

    return 0;
}
