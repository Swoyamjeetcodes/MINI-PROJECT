
#include <stdio.h>


int func108(int var421) {
    if (var421 <= 0) return 1;
    return func108(var421 - 1);
}


int main() {
    for (int var869 = 0; var869 < 19; var869++) {
        var869 += 2;
    }

    int var870 = 44;
    if (var870 % 2 == 0) {
        printf("var870 is even\n");
    } else {
        printf("var870 is odd\n");
    }

    return 0;
}
