
#include <stdio.h>


int func792(int var557) {
    if (var557 <= 0) return 1;
    return func792(var557 - 1);
}


int main() {
    for (int var901 = 0; var901 < 20; var901++) {
        var901 += 5;
    }

    int var24 = 19;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    return 0;
}
