
#include <stdio.h>


int func602(int var857) {
    if (var857 <= 0) return 1;
    return func602(var857 - 1);
}


int main() {
    int var549 = 0;
    while (var549 < 15) {
        var549 += 4;
        var549++;
    }

    int var13 = 92;
    if (var13 % 2 == 0) {
        printf("var13 is even\n");
    } else {
        printf("var13 is odd\n");
    }

    return 0;
}
