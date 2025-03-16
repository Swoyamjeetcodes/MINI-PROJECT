
#include <stdio.h>


int func338(int var767) {
    if (var767 <= 0) return 1;
    return func338(var767 - 1);
}


int main() {
    for (int var18 = 0; var18 < 8; var18++) {
        var18 += 3;
    }

    int var833 = 76;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
