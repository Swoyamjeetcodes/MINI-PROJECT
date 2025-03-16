
#include <stdio.h>


int func842(int var994) {
    if (var994 <= 0) return 1;
    return func842(var994 - 1);
}


int main() {
    int var608 = 0;
    while (var608 < 15) {
        var608 += 4;
        var608++;
    }

    int var138 = 37;
    if (var138 % 2 == 0) {
        printf("var138 is even\n");
    } else {
        printf("var138 is odd\n");
    }

    return 0;
}
