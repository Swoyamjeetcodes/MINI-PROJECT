
#include <stdio.h>


int func760(int var965) {
    if (var965 <= 0) return 1;
    return func760(var965 - 1);
}


int main() {
    for (int var511 = 0; var511 < 7; var511++) {
        var511 += 2;
    }

    int var750 = 61;
    if (var750 % 2 == 0) {
        printf("var750 is even\n");
    } else {
        printf("var750 is odd\n");
    }

    return 0;
}
