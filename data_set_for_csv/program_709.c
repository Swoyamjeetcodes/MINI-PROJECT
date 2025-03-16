
#include <stdio.h>


int func704(int var392) {
    if (var392 <= 0) return 1;
    return func704(var392 - 1);
}


int main() {
    int var689 = 0;
    while (var689 < 5) {
        var689 += 1;
        var689++;
    }

    int var656 = 72;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    return 0;
}
