
#include <stdio.h>


int func896(int var102) {
    if (var102 <= 0) return 1;
    return func896(var102 - 1);
}


int main() {
    for (int var122 = 0; var122 < 15; var122++) {
        var122 += 1;
    }

    int var458 = 22;
    if (var458 % 2 == 0) {
        printf("var458 is even\n");
    } else {
        printf("var458 is odd\n");
    }

    return 0;
}
