
#include <stdio.h>


int func609(int var797) {
    if (var797 <= 0) return 1;
    return func609(var797 - 1);
}


int main() {
    int var105 = 0;
    while (var105 < 17) {
        var105 += 2;
        var105++;
    }

    int var362 = 0;
    if (var362 % 2 == 0) {
        printf("var362 is even\n");
    } else {
        printf("var362 is odd\n");
    }

    return 0;
}
