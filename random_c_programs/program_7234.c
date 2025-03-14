
#include <stdio.h>


int func313(int var392) {
    if (var392 <= 0) return 1;
    return func313(var392 - 1);
}


int main() {
    int var180 = 0;
    while (var180 < 6) {
        var180 += 2;
        var180++;
    }

    int var512 = 17;
    if (var512 % 2 == 0) {
        printf("var512 is even\n");
    } else {
        printf("var512 is odd\n");
    }

    return 0;
}
