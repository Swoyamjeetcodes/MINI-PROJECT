
#include <stdio.h>


int func51(int var492) {
    if (var492 <= 0) return 1;
    return func51(var492 - 1);
}


int main() {
    int var140 = 0;
    while (var140 < 8) {
        var140 += 1;
        var140++;
    }

    int var467 = 50;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    return 0;
}
