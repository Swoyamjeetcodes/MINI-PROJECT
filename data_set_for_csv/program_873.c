
#include <stdio.h>


int func311(int var76) {
    if (var76 <= 0) return 1;
    return func311(var76 - 1);
}


int main() {
    for (int var464 = 0; var464 < 19; var464++) {
        var464 += 1;
    }

    int var177 = 41;
    if (var177 % 2 == 0) {
        printf("var177 is even\n");
    } else {
        printf("var177 is odd\n");
    }

    return 0;
}
