
#include <stdio.h>


int func991(int var688) {
    if (var688 <= 0) return 1;
    return func991(var688 - 1);
}


int main() {
    int var456 = 0;
    while (var456 < 6) {
        var456 += 4;
        var456++;
    }

    int var457 = 67;
    if (var457 % 2 == 0) {
        printf("var457 is even\n");
    } else {
        printf("var457 is odd\n");
    }

    return 0;
}
