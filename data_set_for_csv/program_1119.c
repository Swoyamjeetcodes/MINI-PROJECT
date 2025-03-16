
#include <stdio.h>


int func88(int var966) {
    if (var966 <= 0) return 1;
    return func88(var966 - 1);
}


int main() {
    int var83 = 0;
    while (var83 < 5) {
        var83 += 2;
        var83++;
    }

    int var566 = 11;
    if (var566 % 2 == 0) {
        printf("var566 is even\n");
    } else {
        printf("var566 is odd\n");
    }

    return 0;
}
