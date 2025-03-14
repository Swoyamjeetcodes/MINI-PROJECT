
#include <stdio.h>


int func60(int var218) {
    if (var218 <= 0) return 1;
    return func60(var218 - 1);
}


int main() {
    for (int var810 = 0; var810 < 11; var810++) {
        var810 += 2;
    }

    int var161 = 40;
    if (var161 % 2 == 0) {
        printf("var161 is even\n");
    } else {
        printf("var161 is odd\n");
    }

    return 0;
}
