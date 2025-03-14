
#include <stdio.h>


int func841(int var250) {
    if (var250 <= 0) return 1;
    return func841(var250 - 1);
}


int main() {
    int var306 = 0;
    while (var306 < 16) {
        var306 += 3;
        var306++;
    }

    int var18 = 45;
    if (var18 % 2 == 0) {
        printf("var18 is even\n");
    } else {
        printf("var18 is odd\n");
    }

    return 0;
}
