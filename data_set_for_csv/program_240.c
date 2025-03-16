
#include <stdio.h>


int func68(int var103) {
    if (var103 <= 0) return 1;
    return func68(var103 - 1);
}


int main() {
    int var292 = 0;
    while (var292 < 6) {
        var292 += 3;
        var292++;
    }

    int var10 = 33;
    if (var10 % 2 == 0) {
        printf("var10 is even\n");
    } else {
        printf("var10 is odd\n");
    }

    return 0;
}
