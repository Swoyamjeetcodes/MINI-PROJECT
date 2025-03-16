
#include <stdio.h>


int func18(int var264) {
    if (var264 <= 0) return 1;
    return func18(var264 - 1);
}


int main() {
    for (int var803 = 0; var803 < 19; var803++) {
        var803 += 3;
    }

    int var39 = 9;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    return 0;
}
