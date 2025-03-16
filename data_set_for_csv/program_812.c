
#include <stdio.h>


int func36(int var380) {
    if (var380 <= 0) return 1;
    return func36(var380 - 1);
}


int main() {
    int var292 = 0;
    while (var292 < 13) {
        var292 += 2;
        var292++;
    }

    int var314 = 7;
    if (var314 % 2 == 0) {
        printf("var314 is even\n");
    } else {
        printf("var314 is odd\n");
    }

    int var448 = 67;
    if (var448 % 2 == 0) {
        printf("var448 is even\n");
    } else {
        printf("var448 is odd\n");
    }

    return 0;
}
