
#include <stdio.h>


int func826(int var682) {
    if (var682 <= 0) return 1;
    return func826(var682 - 1);
}


int main() {
    int var327 = 0;
    while (var327 < 15) {
        var327 += 1;
        var327++;
    }

    int var277 = 85;
    if (var277 % 2 == 0) {
        printf("var277 is even\n");
    } else {
        printf("var277 is odd\n");
    }

    return 0;
}
