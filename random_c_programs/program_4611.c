
#include <stdio.h>


int func692(int var292) {
    if (var292 <= 0) return 1;
    return func692(var292 - 1);
}


int main() {
    for (int var561 = 0; var561 < 14; var561++) {
        var561 += 1;
    }

    int var423 = 50;
    if (var423 % 2 == 0) {
        printf("var423 is even\n");
    } else {
        printf("var423 is odd\n");
    }

    return 0;
}
