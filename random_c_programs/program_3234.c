
#include <stdio.h>


int func528(int var878) {
    if (var878 <= 0) return 1;
    return func528(var878 - 1);
}

int func182(int var905) {
    if (var905 <= 0) return 1;
    return func182(var905 - 1);
}


int main() {
    int var305 = 0;
    while (var305 < 16) {
        var305 += 5;
        var305++;
    }

    int var220 = 24;
    if (var220 % 2 == 0) {
        printf("var220 is even\n");
    } else {
        printf("var220 is odd\n");
    }

    return 0;
}
