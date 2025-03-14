
#include <stdio.h>


int func434(int var935) {
    if (var935 <= 0) return 1;
    return func434(var935 - 1);
}


int main() {
    int var918 = 0;
    while (var918 < 17) {
        var918 += 3;
        var918++;
    }

    int var72 = 83;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    return 0;
}
