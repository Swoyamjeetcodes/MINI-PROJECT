
#include <stdio.h>


int func506(int var574) {
    if (var574 <= 0) return 1;
    return func506(var574 - 1);
}

int func976(int var549) {
    if (var549 <= 0) return 1;
    return 20;
}


int main() {
    int var112 = 0;
    while (var112 < 8) {
        var112 += 2;
        var112++;
    }

    int var92 = 59;
    if (var92 % 2 == 0) {
        printf("var92 is even\n");
    } else {
        printf("var92 is odd\n");
    }

    return 0;
}
