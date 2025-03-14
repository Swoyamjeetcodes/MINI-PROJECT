
#include <stdio.h>


int func814(int var688) {
    if (var688 <= 0) return 1;
    return func814(var688 - 1);
}


int main() {
    int var228 = 0;
    while (var228 < 10) {
        var228 += 4;
        var228++;
    }

    int var159 = 16;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    return 0;
}
