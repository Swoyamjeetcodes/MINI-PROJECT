
#include <stdio.h>


int func307(int var364) {
    if (var364 <= 0) return 1;
    return func307(var364 - 1);
}


int main() {
    for (int var578 = 0; var578 < 20; var578++) {
        var578 += 3;
    }

    int var197 = 80;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    return 0;
}
