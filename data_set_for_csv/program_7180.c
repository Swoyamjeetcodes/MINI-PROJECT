
#include <stdio.h>


int func856(int var524) {
    if (var524 <= 0) return 1;
    return func856(var524 - 1);
}


int main() {
    int var34 = 0;
    while (var34 < 14) {
        var34 += 5;
        var34++;
    }

    int var194 = 24;
    if (var194 % 2 == 0) {
        printf("var194 is even\n");
    } else {
        printf("var194 is odd\n");
    }

    return 0;
}
