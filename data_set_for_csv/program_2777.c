
#include <stdio.h>


int func301(int var588) {
    if (var588 <= 0) return 1;
    return func301(var588 - 1);
}


int main() {
    for (int var960 = 0; var960 < 13; var960++) {
        var960 += 1;
    }

    int var52 = 25;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    return 0;
}
