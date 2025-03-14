
#include <stdio.h>


int func582(int var209) {
    if (var209 <= 0) return 1;
    return func582(var209 - 1);
}

int func77(int var624) {
    if (var624 <= 0) return 1;
    return func77(var624 - 1);
}


int main() {
    for (int var434 = 0; var434 < 13; var434++) {
        var434 += 3;
    }

    int var859 = 98;
    if (var859 % 2 == 0) {
        printf("var859 is even\n");
    } else {
        printf("var859 is odd\n");
    }

    return 0;
}
