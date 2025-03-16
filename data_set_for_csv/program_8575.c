
#include <stdio.h>


int func101(int var689) {
    if (var689 <= 0) return 1;
    return func101(var689 - 1);
}


int main() {
    for (int var575 = 0; var575 < 9; var575++) {
        var575 += 3;
    }

    int var805 = 83;
    if (var805 % 2 == 0) {
        printf("var805 is even\n");
    } else {
        printf("var805 is odd\n");
    }

    return 0;
}
