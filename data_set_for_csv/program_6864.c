
#include <stdio.h>


int func301(int var901) {
    if (var901 <= 0) return 1;
    return func301(var901 - 1);
}


int main() {
    int var346 = 0;
    while (var346 < 10) {
        var346 += 3;
        var346++;
    }

    int var176 = 9;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    return 0;
}
