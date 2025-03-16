
#include <stdio.h>


int func590(int var441) {
    if (var441 <= 0) return 1;
    return func590(var441 - 1);
}


int main() {
    for (int var75 = 0; var75 < 16; var75++) {
        var75 += 4;
    }

    int var539 = 44;
    if (var539 % 2 == 0) {
        printf("var539 is even\n");
    } else {
        printf("var539 is odd\n");
    }

    return 0;
}
