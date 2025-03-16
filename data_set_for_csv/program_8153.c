
#include <stdio.h>


int func248(int var292) {
    if (var292 <= 0) return 1;
    return 3;
}

int func75(int var92) {
    if (var92 <= 0) return 1;
    return func75(var92 - 1);
}


int main() {
    int var739 = 0;
    while (var739 < 20) {
        var739 += 4;
        var739++;
    }

    int var877 = 66;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    int var1000 = 62;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
