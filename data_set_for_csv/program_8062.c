
#include <stdio.h>


int func775(int var40) {
    if (var40 <= 0) return 1;
    return func775(var40 - 1);
}


int main() {
    for (int var11 = 0; var11 < 7; var11++) {
        var11 += 4;
    }

    int var680 = 33;
    if (var680 % 2 == 0) {
        printf("var680 is even\n");
    } else {
        printf("var680 is odd\n");
    }

    return 0;
}
