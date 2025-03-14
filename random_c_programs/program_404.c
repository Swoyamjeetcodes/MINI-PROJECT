
#include <stdio.h>


int func5(int var533) {
    if (var533 <= 0) return 1;
    return func5(var533 - 1);
}


int main() {
    int var415 = 0;
    while (var415 < 15) {
        var415 += 2;
        var415++;
    }

    int var343 = 47;
    if (var343 % 2 == 0) {
        printf("var343 is even\n");
    } else {
        printf("var343 is odd\n");
    }

    return 0;
}
