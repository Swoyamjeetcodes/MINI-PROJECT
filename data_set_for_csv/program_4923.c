
#include <stdio.h>


int func880(int var520) {
    if (var520 <= 0) return 1;
    return func880(var520 - 1);
}


int main() {
    int var501 = 0;
    while (var501 < 17) {
        var501 += 2;
        var501++;
    }

    int var271 = 44;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    return 0;
}
