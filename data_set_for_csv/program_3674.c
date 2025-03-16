
#include <stdio.h>


int func461(int var45) {
    if (var45 <= 0) return 1;
    return func461(var45 - 1);
}


int main() {
    int var809 = 0;
    while (var809 < 15) {
        var809 += 3;
        var809++;
    }

    int var437 = 33;
    if (var437 % 2 == 0) {
        printf("var437 is even\n");
    } else {
        printf("var437 is odd\n");
    }

    return 0;
}
