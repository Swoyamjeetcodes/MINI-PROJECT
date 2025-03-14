
#include <stdio.h>


int func127(int var390) {
    if (var390 <= 0) return 1;
    return func127(var390 - 1);
}


int main() {
    int var519 = 0;
    while (var519 < 6) {
        var519 += 2;
        var519++;
    }

    int var281 = 79;
    if (var281 % 2 == 0) {
        printf("var281 is even\n");
    } else {
        printf("var281 is odd\n");
    }

    return 0;
}
