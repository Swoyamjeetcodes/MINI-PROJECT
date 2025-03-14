
#include <stdio.h>


int func367(int var722) {
    if (var722 <= 0) return 1;
    return func367(var722 - 1);
}


int main() {
    for (int var911 = 0; var911 < 10; var911++) {
        var911 += 1;
    }

    int var695 = 77;
    if (var695 % 2 == 0) {
        printf("var695 is even\n");
    } else {
        printf("var695 is odd\n");
    }

    return 0;
}
