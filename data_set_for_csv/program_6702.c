
#include <stdio.h>


int func587(int var373) {
    if (var373 <= 0) return 1;
    return func587(var373 - 1);
}


int main() {
    int var940 = 0;
    while (var940 < 17) {
        var940 += 3;
        var940++;
    }

    int var710 = 49;
    if (var710 % 2 == 0) {
        printf("var710 is even\n");
    } else {
        printf("var710 is odd\n");
    }

    return 0;
}
