
#include <stdio.h>


int func433(int var495) {
    if (var495 <= 0) return 1;
    return func433(var495 - 1);
}


int main() {
    int var464 = 0;
    while (var464 < 8) {
        var464 += 1;
        var464++;
    }

    int var303 = 45;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    return 0;
}
