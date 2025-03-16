
#include <stdio.h>


int func293(int var661) {
    if (var661 <= 0) return 1;
    return func293(var661 - 1);
}


int main() {
    for (int var988 = 0; var988 < 9; var988++) {
        var988 += 4;
    }

    int var825 = 19;
    if (var825 % 2 == 0) {
        printf("var825 is even\n");
    } else {
        printf("var825 is odd\n");
    }

    return 0;
}
