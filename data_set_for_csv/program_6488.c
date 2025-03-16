
#include <stdio.h>


int func922(int var973) {
    if (var973 <= 0) return 1;
    return func922(var973 - 1);
}


int main() {
    int var926 = 0;
    while (var926 < 13) {
        var926 += 2;
        var926++;
    }

    int var207 = 100;
    if (var207 % 2 == 0) {
        printf("var207 is even\n");
    } else {
        printf("var207 is odd\n");
    }

    return 0;
}
