
#include <stdio.h>


int func692(int var108) {
    if (var108 <= 0) return 1;
    return func692(var108 - 1);
}


int main() {
    for (int var305 = 0; var305 < 9; var305++) {
        var305 += 1;
    }

    int var2 = 75;
    if (var2 % 2 == 0) {
        printf("var2 is even\n");
    } else {
        printf("var2 is odd\n");
    }

    return 0;
}
