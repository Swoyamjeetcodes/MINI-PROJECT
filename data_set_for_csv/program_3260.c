
#include <stdio.h>


int func491(int var300) {
    if (var300 <= 0) return 1;
    return func491(var300 - 1);
}


int main() {
    for (int var431 = 0; var431 < 16; var431++) {
        var431 += 1;
    }

    int var546 = 3;
    if (var546 % 2 == 0) {
        printf("var546 is even\n");
    } else {
        printf("var546 is odd\n");
    }

    return 0;
}
