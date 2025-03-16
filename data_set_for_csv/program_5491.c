
#include <stdio.h>


int func825(int var927) {
    if (var927 <= 0) return 1;
    return func825(var927 - 1);
}


int main() {
    for (int var6 = 0; var6 < 20; var6++) {
        var6 += 2;
    }

    int var699 = 4;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
