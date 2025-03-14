
#include <stdio.h>


int func346(int var571) {
    if (var571 <= 0) return 1;
    return func346(var571 - 1);
}


int main() {
    for (int var513 = 0; var513 < 8; var513++) {
        var513 += 1;
    }

    int var314 = 29;
    if (var314 % 2 == 0) {
        printf("var314 is even\n");
    } else {
        printf("var314 is odd\n");
    }

    return 0;
}
