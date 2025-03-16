
#include <stdio.h>


int func38(int var735) {
    if (var735 <= 0) return 1;
    return func38(var735 - 1);
}


int main() {
    for (int var388 = 0; var388 < 10; var388++) {
        var388 += 5;
    }

    int var596 = 37;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    return 0;
}
