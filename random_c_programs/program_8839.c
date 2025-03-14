
#include <stdio.h>


int func946(int var466) {
    if (var466 <= 0) return 1;
    return func946(var466 - 1);
}


int main() {
    int var941 = 0;
    while (var941 < 5) {
        var941 += 1;
        var941++;
    }

    int var518 = 5;
    if (var518 % 2 == 0) {
        printf("var518 is even\n");
    } else {
        printf("var518 is odd\n");
    }

    return 0;
}
