
#include <stdio.h>


int func472(int var323) {
    if (var323 <= 0) return 1;
    return func472(var323 - 1);
}


int main() {
    for (int var161 = 0; var161 < 14; var161++) {
        var161 += 2;
    }

    int var25 = 6;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    return 0;
}
