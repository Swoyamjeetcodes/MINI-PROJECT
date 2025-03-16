
#include <stdio.h>


int func948(int var867) {
    if (var867 <= 0) return 1;
    return func948(var867 - 1);
}


int main() {
    int var285 = 0;
    while (var285 < 5) {
        var285 += 4;
        var285++;
    }

    int var415 = 74;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    return 0;
}
