
#include <stdio.h>


int func318(int var332) {
    if (var332 <= 0) return 1;
    return func318(var332 - 1);
}


int main() {
    int var698 = 0;
    while (var698 < 18) {
        var698 += 5;
        var698++;
    }

    int var553 = 69;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    return 0;
}
