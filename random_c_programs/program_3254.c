
#include <stdio.h>


int func821(int var470) {
    if (var470 <= 0) return 1;
    return func821(var470 - 1);
}


int main() {
    for (int var288 = 0; var288 < 18; var288++) {
        var288 += 5;
    }

    int var627 = 24;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    return 0;
}
