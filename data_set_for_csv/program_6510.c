
#include <stdio.h>


int func759(int var743) {
    if (var743 <= 0) return 1;
    return func759(var743 - 1);
}


int main() {
    int var253 = 0;
    while (var253 < 20) {
        var253 += 4;
        var253++;
    }    for (int var811 = 0; var811 < 9; var811++) {
        var811 += 3;
    }

    int var289 = 89;
    if (var289 % 2 == 0) {
        printf("var289 is even\n");
    } else {
        printf("var289 is odd\n");
    }

    int var279 = 86;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    return 0;
}
