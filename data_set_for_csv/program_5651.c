
#include <stdio.h>


int func567(int var180) {
    if (var180 <= 0) return 1;
    return func567(var180 - 1);
}


int main() {
    for (int var444 = 0; var444 < 18; var444++) {
        var444 += 1;
    }

    int var792 = 11;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    return 0;
}
