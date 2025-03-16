
#include <stdio.h>


int func87(int var352) {
    if (var352 <= 0) return 1;
    return func87(var352 - 1);
}


int main() {
    int var632 = 0;
    while (var632 < 19) {
        var632 += 5;
        var632++;
    }

    int var796 = 1;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    return 0;
}
