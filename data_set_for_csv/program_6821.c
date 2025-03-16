
#include <stdio.h>


int func522(int var457) {
    if (var457 <= 0) return 1;
    return func522(var457 - 1);
}


int main() {
    int var862 = 0;
    while (var862 < 16) {
        var862 += 3;
        var862++;
    }

    int var103 = 87;
    if (var103 % 2 == 0) {
        printf("var103 is even\n");
    } else {
        printf("var103 is odd\n");
    }

    return 0;
}
