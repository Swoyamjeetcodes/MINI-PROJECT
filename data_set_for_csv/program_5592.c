
#include <stdio.h>


int func144(int var376) {
    if (var376 <= 0) return 1;
    return func144(var376 - 1);
}


int main() {
    int var389 = 0;
    while (var389 < 12) {
        var389 += 1;
        var389++;
    }

    int var39 = 88;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    return 0;
}
