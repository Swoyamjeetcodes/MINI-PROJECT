
#include <stdio.h>


int func935(int var779) {
    if (var779 <= 0) return 1;
    return func935(var779 - 1);
}


int main() {
    int var931 = 0;
    while (var931 < 16) {
        var931 += 2;
        var931++;
    }

    int var192 = 72;
    if (var192 % 2 == 0) {
        printf("var192 is even\n");
    } else {
        printf("var192 is odd\n");
    }

    return 0;
}
