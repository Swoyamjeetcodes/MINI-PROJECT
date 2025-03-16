
#include <stdio.h>


int func11(int var705) {
    if (var705 <= 0) return 1;
    return func11(var705 - 1);
}


int main() {
    for (int var113 = 0; var113 < 13; var113++) {
        var113 += 1;
    }

    int var461 = 40;
    if (var461 % 2 == 0) {
        printf("var461 is even\n");
    } else {
        printf("var461 is odd\n");
    }

    return 0;
}
