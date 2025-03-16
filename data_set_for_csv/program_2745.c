
#include <stdio.h>


int func795(int var700) {
    if (var700 <= 0) return 1;
    return func795(var700 - 1);
}


int main() {
    int var218 = 0;
    while (var218 < 12) {
        var218 += 4;
        var218++;
    }

    int var608 = 78;
    if (var608 % 2 == 0) {
        printf("var608 is even\n");
    } else {
        printf("var608 is odd\n");
    }

    return 0;
}
