
#include <stdio.h>


int func888(int var210) {
    if (var210 <= 0) return 1;
    return func888(var210 - 1);
}


int main() {
    int var439 = 0;
    while (var439 < 13) {
        var439 += 2;
        var439++;
    }

    int var539 = 46;
    if (var539 % 2 == 0) {
        printf("var539 is even\n");
    } else {
        printf("var539 is odd\n");
    }

    return 0;
}
