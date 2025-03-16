
#include <stdio.h>


int func605(int var358) {
    if (var358 <= 0) return 1;
    return func605(var358 - 1);
}


int main() {
    int var247 = 0;
    while (var247 < 15) {
        var247 += 3;
        var247++;
    }

    int var40 = 55;
    if (var40 % 2 == 0) {
        printf("var40 is even\n");
    } else {
        printf("var40 is odd\n");
    }

    return 0;
}
