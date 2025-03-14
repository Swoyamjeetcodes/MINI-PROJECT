
#include <stdio.h>


int func706(int var238) {
    if (var238 <= 0) return 1;
    return func706(var238 - 1);
}


int main() {
    int var509 = 0;
    while (var509 < 12) {
        var509 += 1;
        var509++;
    }

    int var46 = 49;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    return 0;
}
