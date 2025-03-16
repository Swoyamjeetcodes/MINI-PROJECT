
#include <stdio.h>


int func225(int var411) {
    if (var411 <= 0) return 1;
    return func225(var411 - 1);
}


int main() {
    int var389 = 0;
    while (var389 < 17) {
        var389 += 1;
        var389++;
    }

    int var179 = 48;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    return 0;
}
