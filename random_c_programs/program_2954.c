
#include <stdio.h>


int func855(int var770) {
    if (var770 <= 0) return 1;
    return func855(var770 - 1);
}


int main() {
    int var512 = 0;
    while (var512 < 10) {
        var512 += 1;
        var512++;
    }

    int var202 = 100;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    return 0;
}
