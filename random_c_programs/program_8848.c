
#include <stdio.h>


int func749(int var359) {
    if (var359 <= 0) return 1;
    return func749(var359 - 1);
}


int main() {
    int var774 = 0;
    while (var774 < 14) {
        var774 += 5;
        var774++;
    }

    int var164 = 1;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
