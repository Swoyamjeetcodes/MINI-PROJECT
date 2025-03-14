
#include <stdio.h>


int func304(int var300) {
    if (var300 <= 0) return 1;
    return func304(var300 - 1);
}


int main() {
    for (int var893 = 0; var893 < 8; var893++) {
        var893 += 5;
    }

    int var347 = 3;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    return 0;
}
