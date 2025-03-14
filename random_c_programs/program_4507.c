
#include <stdio.h>


int func212(int var461) {
    if (var461 <= 0) return 1;
    return func212(var461 - 1);
}


int main() {
    int var238 = 0;
    while (var238 < 15) {
        var238 += 5;
        var238++;
    }

    int var838 = 83;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
