
#include <stdio.h>


int func282(int var496) {
    if (var496 <= 0) return 1;
    return func282(var496 - 1);
}


int main() {
    int var802 = 0;
    while (var802 < 10) {
        var802 += 5;
        var802++;
    }

    int var238 = 7;
    if (var238 % 2 == 0) {
        printf("var238 is even\n");
    } else {
        printf("var238 is odd\n");
    }

    return 0;
}
