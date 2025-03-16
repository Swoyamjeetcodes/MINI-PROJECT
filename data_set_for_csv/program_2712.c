
#include <stdio.h>


int func222(int var943) {
    if (var943 <= 0) return 1;
    return func222(var943 - 1);
}


int main() {
    for (int var368 = 0; var368 < 17; var368++) {
        var368 += 1;
    }

    int var656 = 86;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    return 0;
}
