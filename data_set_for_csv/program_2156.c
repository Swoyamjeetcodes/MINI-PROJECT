
#include <stdio.h>


int func449(int var330) {
    if (var330 <= 0) return 1;
    return func449(var330 - 1);
}


int main() {
    for (int var247 = 0; var247 < 5; var247++) {
        var247 += 4;
    }

    int var843 = 32;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    return 0;
}
