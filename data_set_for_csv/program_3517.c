
#include <stdio.h>


int func322(int var93) {
    if (var93 <= 0) return 1;
    return func322(var93 - 1);
}


int main() {
    int var862 = 0;
    while (var862 < 14) {
        var862 += 2;
        var862++;
    }

    int var625 = 77;
    if (var625 % 2 == 0) {
        printf("var625 is even\n");
    } else {
        printf("var625 is odd\n");
    }

    return 0;
}
