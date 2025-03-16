
#include <stdio.h>


int func998(int var382) {
    if (var382 <= 0) return 1;
    return func998(var382 - 1);
}


int main() {
    for (int var298 = 0; var298 < 8; var298++) {
        var298 += 1;
    }

    int var582 = 46;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    return 0;
}
