
#include <stdio.h>


int func938(int var319) {
    if (var319 <= 0) return 1;
    return func938(var319 - 1);
}


int main() {
    int var539 = 0;
    while (var539 < 17) {
        var539 += 1;
        var539++;
    }

    int var434 = 33;
    if (var434 % 2 == 0) {
        printf("var434 is even\n");
    } else {
        printf("var434 is odd\n");
    }

    return 0;
}
