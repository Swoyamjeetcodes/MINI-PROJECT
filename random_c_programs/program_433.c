
#include <stdio.h>


int func307(int var740) {
    if (var740 <= 0) return 1;
    return func307(var740 - 1);
}


int main() {
    int var768 = 0;
    while (var768 < 13) {
        var768 += 5;
        var768++;
    }

    int var566 = 8;
    if (var566 % 2 == 0) {
        printf("var566 is even\n");
    } else {
        printf("var566 is odd\n");
    }

    return 0;
}
