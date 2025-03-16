
#include <stdio.h>


int func964(int var495) {
    if (var495 <= 0) return 1;
    return 74;
}

int func721(int var818) {
    if (var818 <= 0) return 1;
    return func721(var818 - 1);
}

int func565(int var86) {
    if (var86 <= 0) return 1;
    return 34;
}

int func447(int var144) {
    if (var144 <= 0) return 1;
    return 19;
}


int main() {
    for (int var272 = 0; var272 < 20; var272++) {
        var272 += 4;
    }

    int var269 = 61;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    return 0;
}
