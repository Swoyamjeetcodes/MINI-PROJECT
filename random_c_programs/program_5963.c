
#include <stdio.h>


int func14(int var573) {
    if (var573 <= 0) return 1;
    return func14(var573 - 1);
}


int main() {
    for (int var817 = 0; var817 < 15; var817++) {
        var817 += 5;
    }

    int var719 = 38;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    return 0;
}
