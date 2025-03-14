
#include <stdio.h>


int func635(int var165) {
    if (var165 <= 0) return 1;
    return func635(var165 - 1);
}


int main() {
    int var670 = 0;
    while (var670 < 6) {
        var670 += 5;
        var670++;
    }

    int var111 = 65;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    return 0;
}
