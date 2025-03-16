
#include <stdio.h>


int func740(int var135) {
    if (var135 <= 0) return 1;
    return func740(var135 - 1);
}


int main() {
    int var175 = 0;
    while (var175 < 11) {
        var175 += 1;
        var175++;
    }

    int var463 = 16;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    return 0;
}
