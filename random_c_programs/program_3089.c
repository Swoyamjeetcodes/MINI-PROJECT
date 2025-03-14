
#include <stdio.h>


int func675(int var689) {
    if (var689 <= 0) return 1;
    return func675(var689 - 1);
}


int main() {
    int var202 = 0;
    while (var202 < 19) {
        var202 += 5;
        var202++;
    }

    int var247 = 92;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    return 0;
}
