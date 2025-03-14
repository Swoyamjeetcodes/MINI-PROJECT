
#include <stdio.h>


int func890(int var39) {
    if (var39 <= 0) return 1;
    return func890(var39 - 1);
}


int main() {
    int var933 = 0;
    while (var933 < 5) {
        var933 += 3;
        var933++;
    }

    int var572 = 78;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    int var529 = 60;
    if (var529 % 2 == 0) {
        printf("var529 is even\n");
    } else {
        printf("var529 is odd\n");
    }

    return 0;
}
