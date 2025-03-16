
#include <stdio.h>


int func647(int var574) {
    if (var574 <= 0) return 1;
    return func647(var574 - 1);
}


int main() {
    int var585 = 0;
    while (var585 < 18) {
        var585 += 5;
        var585++;
    }

    int var509 = 28;
    if (var509 % 2 == 0) {
        printf("var509 is even\n");
    } else {
        printf("var509 is odd\n");
    }

    return 0;
}
