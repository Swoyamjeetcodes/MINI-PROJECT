
#include <stdio.h>


int func329(int var379) {
    if (var379 <= 0) return 1;
    return func329(var379 - 1);
}


int main() {
    int var415 = 0;
    while (var415 < 11) {
        var415 += 5;
        var415++;
    }

    int var74 = 19;
    if (var74 % 2 == 0) {
        printf("var74 is even\n");
    } else {
        printf("var74 is odd\n");
    }

    return 0;
}
