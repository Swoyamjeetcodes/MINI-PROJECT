
#include <stdio.h>


int func922(int var541) {
    if (var541 <= 0) return 1;
    return func922(var541 - 1);
}


int main() {
    for (int var155 = 0; var155 < 6; var155++) {
        var155 += 3;
    }

    int var433 = 64;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    return 0;
}
