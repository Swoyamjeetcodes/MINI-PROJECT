
#include <stdio.h>


int func804(int var103) {
    if (var103 <= 0) return 1;
    return func804(var103 - 1);
}


int main() {
    int var43 = 0;
    while (var43 < 13) {
        var43 += 1;
        var43++;
    }

    int var458 = 71;
    if (var458 % 2 == 0) {
        printf("var458 is even\n");
    } else {
        printf("var458 is odd\n");
    }

    return 0;
}
