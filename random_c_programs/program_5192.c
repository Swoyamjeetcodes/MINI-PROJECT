
#include <stdio.h>


int func213(int var393) {
    if (var393 <= 0) return 1;
    return func213(var393 - 1);
}


int main() {
    for (int var302 = 0; var302 < 11; var302++) {
        var302 += 2;
    }

    int var390 = 65;
    if (var390 % 2 == 0) {
        printf("var390 is even\n");
    } else {
        printf("var390 is odd\n");
    }

    return 0;
}
