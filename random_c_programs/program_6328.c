
#include <stdio.h>


int func153(int var541) {
    if (var541 <= 0) return 1;
    return func153(var541 - 1);
}


int main() {
    int var632 = 0;
    while (var632 < 18) {
        var632 += 1;
        var632++;
    }

    int var553 = 56;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    return 0;
}
