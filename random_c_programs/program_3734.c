
#include <stdio.h>


int func79(int var536) {
    if (var536 <= 0) return 1;
    return func79(var536 - 1);
}


int main() {
    for (int var571 = 0; var571 < 6; var571++) {
        var571 += 2;
    }

    int var634 = 57;
    if (var634 % 2 == 0) {
        printf("var634 is even\n");
    } else {
        printf("var634 is odd\n");
    }

    int var339 = 47;
    if (var339 % 2 == 0) {
        printf("var339 is even\n");
    } else {
        printf("var339 is odd\n");
    }

    int var87 = 94;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}
