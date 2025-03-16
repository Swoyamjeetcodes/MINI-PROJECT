
#include <stdio.h>


int func492(int var687) {
    if (var687 <= 0) return 1;
    return func492(var687 - 1);
}


int main() {
    for (int var651 = 0; var651 < 7; var651++) {
        var651 += 4;
    }

    int var432 = 24;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    return 0;
}
