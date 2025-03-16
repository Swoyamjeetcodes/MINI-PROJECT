
#include <stdio.h>


int func381(int var733) {
    if (var733 <= 0) return 1;
    return func381(var733 - 1);
}


int main() {
    for (int var768 = 0; var768 < 16; var768++) {
        var768 += 4;
    }

    int var554 = 15;
    if (var554 % 2 == 0) {
        printf("var554 is even\n");
    } else {
        printf("var554 is odd\n");
    }

    return 0;
}
