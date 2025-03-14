
#include <stdio.h>


int func983(int var772) {
    if (var772 <= 0) return 1;
    return func983(var772 - 1);
}


int main() {
    for (int var298 = 0; var298 < 18; var298++) {
        var298 += 3;
    }

    int var444 = 33;
    if (var444 % 2 == 0) {
        printf("var444 is even\n");
    } else {
        printf("var444 is odd\n");
    }

    return 0;
}
