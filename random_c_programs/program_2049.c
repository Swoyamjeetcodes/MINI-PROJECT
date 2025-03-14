
#include <stdio.h>


int func711(int var950) {
    if (var950 <= 0) return 1;
    return func711(var950 - 1);
}


int main() {
    int var71 = 0;
    while (var71 < 8) {
        var71 += 2;
        var71++;
    }

    int var338 = 25;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    return 0;
}
