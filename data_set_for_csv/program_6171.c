
#include <stdio.h>


int func558(int var222) {
    if (var222 <= 0) return 1;
    return func558(var222 - 1);
}


int main() {
    for (int var213 = 0; var213 < 15; var213++) {
        var213 += 2;
    }

    int var86 = 47;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    return 0;
}
