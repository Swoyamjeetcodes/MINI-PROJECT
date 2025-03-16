
#include <stdio.h>


int func588(int var708) {
    if (var708 <= 0) return 1;
    return func588(var708 - 1);
}


int main() {
    for (int var468 = 0; var468 < 7; var468++) {
        var468 += 5;
    }

    int var901 = 4;
    if (var901 % 2 == 0) {
        printf("var901 is even\n");
    } else {
        printf("var901 is odd\n");
    }

    return 0;
}
