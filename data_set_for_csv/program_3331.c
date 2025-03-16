
#include <stdio.h>


int func514(int var213) {
    if (var213 <= 0) return 1;
    return func514(var213 - 1);
}


int main() {
    for (int var252 = 0; var252 < 5; var252++) {
        var252 += 2;
    }

    int var700 = 10;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    return 0;
}
