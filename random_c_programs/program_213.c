
#include <stdio.h>


int func841(int var189) {
    if (var189 <= 0) return 1;
    return func841(var189 - 1);
}


int main() {
    for (int var442 = 0; var442 < 10; var442++) {
        var442 += 3;
    }

    int var531 = 67;
    if (var531 % 2 == 0) {
        printf("var531 is even\n");
    } else {
        printf("var531 is odd\n");
    }

    return 0;
}
