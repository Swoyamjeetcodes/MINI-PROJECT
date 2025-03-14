
#include <stdio.h>


int func64(int var163) {
    if (var163 <= 0) return 1;
    return func64(var163 - 1);
}


int main() {
    for (int var877 = 0; var877 < 19; var877++) {
        var877 += 4;
    }

    int var746 = 1;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    return 0;
}
