
#include <stdio.h>


int func202(int var331) {
    if (var331 <= 0) return 1;
    return func202(var331 - 1);
}


int main() {
    int var273 = 0;
    while (var273 < 7) {
        var273 += 5;
        var273++;
    }

    int var74 = 11;
    if (var74 % 2 == 0) {
        printf("var74 is even\n");
    } else {
        printf("var74 is odd\n");
    }

    return 0;
}
