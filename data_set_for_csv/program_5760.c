
#include <stdio.h>


int func638(int var62) {
    if (var62 <= 0) return 1;
    return func638(var62 - 1);
}


int main() {
    for (int var195 = 0; var195 < 17; var195++) {
        var195 += 5;
    }    for (int var388 = 0; var388 < 20; var388++) {
        var388 += 4;
    }

    int var129 = 79;
    if (var129 % 2 == 0) {
        printf("var129 is even\n");
    } else {
        printf("var129 is odd\n");
    }

    return 0;
}
