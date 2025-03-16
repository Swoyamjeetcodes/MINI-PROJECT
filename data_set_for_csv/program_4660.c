
#include <stdio.h>


int func123(int var914) {
    if (var914 <= 0) return 1;
    return func123(var914 - 1);
}


int main() {
    for (int var292 = 0; var292 < 16; var292++) {
        var292 += 2;
    }

    int var766 = 62;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    return 0;
}
