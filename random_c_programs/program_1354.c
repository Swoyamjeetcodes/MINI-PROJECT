
#include <stdio.h>


int func831(int var157) {
    if (var157 <= 0) return 1;
    return func831(var157 - 1);
}


int main() {
    for (int var457 = 0; var457 < 13; var457++) {
        var457 += 5;
    }

    int var208 = 70;
    if (var208 % 2 == 0) {
        printf("var208 is even\n");
    } else {
        printf("var208 is odd\n");
    }

    return 0;
}
