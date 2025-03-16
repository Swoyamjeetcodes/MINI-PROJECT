
#include <stdio.h>


int func581(int var546) {
    if (var546 <= 0) return 1;
    return func581(var546 - 1);
}


int main() {
    for (int var1 = 0; var1 < 12; var1++) {
        var1 += 2;
    }

    int var26 = 46;
    if (var26 % 2 == 0) {
        printf("var26 is even\n");
    } else {
        printf("var26 is odd\n");
    }

    return 0;
}
