
#include <stdio.h>


int func996(int var217) {
    if (var217 <= 0) return 1;
    return func996(var217 - 1);
}


int main() {
    for (int var464 = 0; var464 < 9; var464++) {
        var464 += 3;
    }

    int var239 = 40;
    if (var239 % 2 == 0) {
        printf("var239 is even\n");
    } else {
        printf("var239 is odd\n");
    }

    return 0;
}
