
#include <stdio.h>


int func359(int var734) {
    if (var734 <= 0) return 1;
    return func359(var734 - 1);
}


int main() {
    int var242 = 0;
    while (var242 < 14) {
        var242 += 5;
        var242++;
    }

    int var88 = 48;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    return 0;
}
