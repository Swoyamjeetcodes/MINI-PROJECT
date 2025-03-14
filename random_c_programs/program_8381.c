
#include <stdio.h>


int func226(int var8) {
    if (var8 <= 0) return 1;
    return func226(var8 - 1);
}


int main() {
    for (int var304 = 0; var304 < 19; var304++) {
        var304 += 4;
    }

    int var708 = 69;
    if (var708 % 2 == 0) {
        printf("var708 is even\n");
    } else {
        printf("var708 is odd\n");
    }

    return 0;
}
