
#include <stdio.h>


int func535(int var781) {
    if (var781 <= 0) return 1;
    return func535(var781 - 1);
}


int main() {
    for (int var177 = 0; var177 < 16; var177++) {
        var177 += 3;
    }

    int var399 = 57;
    if (var399 % 2 == 0) {
        printf("var399 is even\n");
    } else {
        printf("var399 is odd\n");
    }

    return 0;
}
