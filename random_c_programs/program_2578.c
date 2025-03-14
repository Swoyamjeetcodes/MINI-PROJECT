
#include <stdio.h>


int func684(int var199) {
    if (var199 <= 0) return 1;
    return func684(var199 - 1);
}


int main() {
    for (int var929 = 0; var929 < 18; var929++) {
        var929 += 3;
    }

    int var678 = 43;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    return 0;
}
