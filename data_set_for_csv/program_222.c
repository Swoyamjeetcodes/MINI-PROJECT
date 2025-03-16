
#include <stdio.h>


int func379(int var763) {
    if (var763 <= 0) return 1;
    return func379(var763 - 1);
}


int main() {
    int var273 = 0;
    while (var273 < 20) {
        var273 += 4;
        var273++;
    }

    int var444 = 83;
    if (var444 % 2 == 0) {
        printf("var444 is even\n");
    } else {
        printf("var444 is odd\n");
    }

    return 0;
}
