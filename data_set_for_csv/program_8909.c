
#include <stdio.h>


int func802(int var85) {
    if (var85 <= 0) return 1;
    return func802(var85 - 1);
}


int main() {
    int var946 = 0;
    while (var946 < 16) {
        var946 += 2;
        var946++;
    }

    int var750 = 18;
    if (var750 % 2 == 0) {
        printf("var750 is even\n");
    } else {
        printf("var750 is odd\n");
    }

    return 0;
}
