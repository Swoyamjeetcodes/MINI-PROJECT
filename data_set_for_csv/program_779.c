
#include <stdio.h>


int func222(int var532) {
    if (var532 <= 0) return 1;
    return func222(var532 - 1);
}


int main() {
    int var358 = 0;
    while (var358 < 10) {
        var358 += 4;
        var358++;
    }

    int var42 = 66;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
