
#include <stdio.h>


int func833(int var214) {
    if (var214 <= 0) return 1;
    return func833(var214 - 1);
}


int main() {
    int var221 = 0;
    while (var221 < 19) {
        var221 += 5;
        var221++;
    }

    int var619 = 51;
    if (var619 % 2 == 0) {
        printf("var619 is even\n");
    } else {
        printf("var619 is odd\n");
    }

    return 0;
}
