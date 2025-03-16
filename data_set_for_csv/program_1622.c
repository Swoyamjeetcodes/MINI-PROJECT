
#include <stdio.h>


int func16(int var81) {
    if (var81 <= 0) return 1;
    return func16(var81 - 1);
}


int main() {
    for (int var529 = 0; var529 < 19; var529++) {
        var529 += 2;
    }

    int var155 = 90;
    if (var155 % 2 == 0) {
        printf("var155 is even\n");
    } else {
        printf("var155 is odd\n");
    }

    return 0;
}
