
#include <stdio.h>


int func430(int var643) {
    if (var643 <= 0) return 1;
    return func430(var643 - 1);
}


int main() {
    int var647 = 0;
    while (var647 < 14) {
        var647 += 5;
        var647++;
    }

    int var648 = 77;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    return 0;
}
