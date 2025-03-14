
#include <stdio.h>


int func578(int var657) {
    if (var657 <= 0) return 1;
    return func578(var657 - 1);
}


int main() {
    int var253 = 0;
    while (var253 < 14) {
        var253 += 5;
        var253++;
    }

    int var96 = 81;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    return 0;
}
