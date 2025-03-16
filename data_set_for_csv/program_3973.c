
#include <stdio.h>


int func21(int var222) {
    if (var222 <= 0) return 1;
    return func21(var222 - 1);
}


int main() {
    for (int var50 = 0; var50 < 19; var50++) {
        var50 += 3;
    }

    int var52 = 52;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    return 0;
}
