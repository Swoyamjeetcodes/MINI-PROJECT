
#include <stdio.h>


int func4(int var6) {
    if (var6 <= 0) return 1;
    return func4(var6 - 1);
}


int main() {
    int var409 = 0;
    while (var409 < 14) {
        var409 += 3;
        var409++;
    }

    int var838 = 42;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
