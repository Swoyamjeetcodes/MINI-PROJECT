
#include <stdio.h>


int func714(int var963) {
    if (var963 <= 0) return 1;
    return func714(var963 - 1);
}


int main() {
    for (int var949 = 0; var949 < 6; var949++) {
        var949 += 5;
    }

    int var625 = 34;
    if (var625 % 2 == 0) {
        printf("var625 is even\n");
    } else {
        printf("var625 is odd\n");
    }

    return 0;
}
