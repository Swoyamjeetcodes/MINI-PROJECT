
#include <stdio.h>


int func8(int var376) {
    if (var376 <= 0) return 1;
    return func8(var376 - 1);
}

int func169(int var909) {
    if (var909 <= 0) return 1;
    return 94;
}

int func511(int var566) {
    if (var566 <= 0) return 1;
    return 79;
}

int func644(int var117) {
    if (var117 <= 0) return 1;
    return func644(var117 - 1);
}


int main() {
    for (int var90 = 0; var90 < 13; var90++) {
        var90 += 4;
    }

    int var283 = 43;
    if (var283 % 2 == 0) {
        printf("var283 is even\n");
    } else {
        printf("var283 is odd\n");
    }

    return 0;
}
