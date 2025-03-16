
#include <stdio.h>


int func505(int var383) {
    if (var383 <= 0) return 1;
    return func505(var383 - 1);
}


int main() {
    int var214 = 0;
    while (var214 < 17) {
        var214 += 3;
        var214++;
    }

    int var176 = 59;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    return 0;
}
