
#include <stdio.h>


int func657(int var385) {
    if (var385 <= 0) return 1;
    return func657(var385 - 1);
}


int main() {
    for (int var811 = 0; var811 < 11; var811++) {
        var811 += 3;
    }    for (int var554 = 0; var554 < 12; var554++) {
        var554 += 3;
    }

    int var644 = 94;
    if (var644 % 2 == 0) {
        printf("var644 is even\n");
    } else {
        printf("var644 is odd\n");
    }

    int var903 = 55;
    if (var903 % 2 == 0) {
        printf("var903 is even\n");
    } else {
        printf("var903 is odd\n");
    }

    return 0;
}
