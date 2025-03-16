
#include <stdio.h>


int func978(int var865) {
    if (var865 <= 0) return 1;
    return func978(var865 - 1);
}


int main() {
    for (int var130 = 0; var130 < 14; var130++) {
        var130 += 5;
    }

    int var669 = 92;
    if (var669 % 2 == 0) {
        printf("var669 is even\n");
    } else {
        printf("var669 is odd\n");
    }

    return 0;
}
