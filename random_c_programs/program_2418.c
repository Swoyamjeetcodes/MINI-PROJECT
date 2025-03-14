
#include <stdio.h>


int func79(int var692) {
    if (var692 <= 0) return 1;
    return func79(var692 - 1);
}


int main() {
    for (int var843 = 0; var843 < 7; var843++) {
        var843 += 2;
    }

    int var125 = 72;
    if (var125 % 2 == 0) {
        printf("var125 is even\n");
    } else {
        printf("var125 is odd\n");
    }

    return 0;
}
