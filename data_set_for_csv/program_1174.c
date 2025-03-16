
#include <stdio.h>


int func892(int var508) {
    if (var508 <= 0) return 1;
    return func892(var508 - 1);
}


int main() {
    int var17 = 0;
    while (var17 < 13) {
        var17 += 4;
        var17++;
    }

    int var44 = 83;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    return 0;
}
