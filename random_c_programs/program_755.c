
#include <stdio.h>


int func276(int var97) {
    if (var97 <= 0) return 1;
    return func276(var97 - 1);
}


int main() {
    int var714 = 0;
    while (var714 < 18) {
        var714 += 1;
        var714++;
    }

    int var911 = 55;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    return 0;
}
