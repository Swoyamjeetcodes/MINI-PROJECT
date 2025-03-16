
#include <stdio.h>


int func993(int var1000) {
    if (var1000 <= 0) return 1;
    return func993(var1000 - 1);
}


int main() {
    for (int var755 = 0; var755 < 19; var755++) {
        var755 += 5;
    }

    int var940 = 21;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    return 0;
}
