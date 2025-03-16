
#include <stdio.h>


int func651(int var666) {
    if (var666 <= 0) return 1;
    return func651(var666 - 1);
}


int main() {
    for (int var338 = 0; var338 < 6; var338++) {
        var338 += 4;
    }

    int var141 = 94;
    if (var141 % 2 == 0) {
        printf("var141 is even\n");
    } else {
        printf("var141 is odd\n");
    }

    return 0;
}
