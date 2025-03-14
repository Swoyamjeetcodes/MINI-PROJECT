
#include <stdio.h>


int func719(int var841) {
    if (var841 <= 0) return 1;
    return func719(var841 - 1);
}


int main() {
    int var617 = 0;
    while (var617 < 14) {
        var617 += 4;
        var617++;
    }

    int var252 = 73;
    if (var252 % 2 == 0) {
        printf("var252 is even\n");
    } else {
        printf("var252 is odd\n");
    }

    return 0;
}
