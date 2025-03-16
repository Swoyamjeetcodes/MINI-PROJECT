
#include <stdio.h>


int func375(int var525) {
    if (var525 <= 0) return 1;
    return func375(var525 - 1);
}


int main() {
    for (int var539 = 0; var539 < 18; var539++) {
        var539 += 5;
    }

    int var314 = 48;
    if (var314 % 2 == 0) {
        printf("var314 is even\n");
    } else {
        printf("var314 is odd\n");
    }

    return 0;
}
