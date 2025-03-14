
#include <stdio.h>


int func401(int var192) {
    if (var192 <= 0) return 1;
    return func401(var192 - 1);
}


int main() {
    for (int var319 = 0; var319 < 20; var319++) {
        var319 += 3;
    }

    int var973 = 17;
    if (var973 % 2 == 0) {
        printf("var973 is even\n");
    } else {
        printf("var973 is odd\n");
    }

    return 0;
}
