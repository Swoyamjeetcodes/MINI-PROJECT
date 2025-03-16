
#include <stdio.h>


int func641(int var124) {
    if (var124 <= 0) return 1;
    return func641(var124 - 1);
}


int main() {
    for (int var950 = 0; var950 < 5; var950++) {
        var950 += 2;
    }

    int var507 = 6;
    if (var507 % 2 == 0) {
        printf("var507 is even\n");
    } else {
        printf("var507 is odd\n");
    }

    return 0;
}
