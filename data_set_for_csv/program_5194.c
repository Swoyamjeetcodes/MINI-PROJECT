
#include <stdio.h>


int func641(int var884) {
    if (var884 <= 0) return 1;
    return func641(var884 - 1);
}


int main() {
    int var692 = 0;
    while (var692 < 6) {
        var692 += 5;
        var692++;
    }

    int var796 = 10;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    return 0;
}
