
#include <stdio.h>


int func4(int var871) {
    if (var871 <= 0) return 1;
    return func4(var871 - 1);
}


int main() {
    for (int var66 = 0; var66 < 8; var66++) {
        var66 += 3;
    }

    int var84 = 90;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
