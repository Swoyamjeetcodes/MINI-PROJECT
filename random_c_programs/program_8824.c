
#include <stdio.h>


int func383(int var835) {
    if (var835 <= 0) return 1;
    return func383(var835 - 1);
}


int main() {
    int var85 = 0;
    while (var85 < 11) {
        var85 += 3;
        var85++;
    }

    int var176 = 40;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    return 0;
}
