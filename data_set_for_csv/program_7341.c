
#include <stdio.h>


int func132(int var335) {
    if (var335 <= 0) return 1;
    return func132(var335 - 1);
}


int main() {
    int var454 = 0;
    while (var454 < 6) {
        var454 += 1;
        var454++;
    }

    int var117 = 11;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    return 0;
}
