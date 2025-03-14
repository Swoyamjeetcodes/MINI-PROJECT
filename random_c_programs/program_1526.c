
#include <stdio.h>


int func168(int var830) {
    if (var830 <= 0) return 1;
    return func168(var830 - 1);
}


int main() {
    int var586 = 0;
    while (var586 < 17) {
        var586 += 2;
        var586++;
    }

    int var566 = 21;
    if (var566 % 2 == 0) {
        printf("var566 is even\n");
    } else {
        printf("var566 is odd\n");
    }

    return 0;
}
