
#include <stdio.h>


int func997(int var165) {
    if (var165 <= 0) return 1;
    return func997(var165 - 1);
}


int main() {
    int var837 = 0;
    while (var837 < 15) {
        var837 += 5;
        var837++;
    }

    int var406 = 42;
    if (var406 % 2 == 0) {
        printf("var406 is even\n");
    } else {
        printf("var406 is odd\n");
    }

    return 0;
}
