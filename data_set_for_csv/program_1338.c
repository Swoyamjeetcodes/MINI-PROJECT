
#include <stdio.h>


int func137(int var209) {
    if (var209 <= 0) return 1;
    return func137(var209 - 1);
}


int main() {
    for (int var228 = 0; var228 < 18; var228++) {
        var228 += 5;
    }

    int var966 = 54;
    if (var966 % 2 == 0) {
        printf("var966 is even\n");
    } else {
        printf("var966 is odd\n");
    }

    return 0;
}
