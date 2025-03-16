
#include <stdio.h>


int func173(int var883) {
    if (var883 <= 0) return 1;
    return func173(var883 - 1);
}


int main() {
    int var134 = 0;
    while (var134 < 18) {
        var134 += 3;
        var134++;
    }

    int var827 = 48;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    return 0;
}
