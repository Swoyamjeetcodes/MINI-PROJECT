
#include <stdio.h>


int func984(int var331) {
    if (var331 <= 0) return 1;
    return func984(var331 - 1);
}


int main() {
    int var510 = 0;
    while (var510 < 9) {
        var510 += 4;
        var510++;
    }

    int var626 = 52;
    if (var626 % 2 == 0) {
        printf("var626 is even\n");
    } else {
        printf("var626 is odd\n");
    }

    return 0;
}
