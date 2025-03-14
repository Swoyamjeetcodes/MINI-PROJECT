
#include <stdio.h>


int func109(int var584) {
    if (var584 <= 0) return 1;
    return func109(var584 - 1);
}


int main() {
    for (int var971 = 0; var971 < 7; var971++) {
        var971 += 1;
    }

    int var149 = 42;
    if (var149 % 2 == 0) {
        printf("var149 is even\n");
    } else {
        printf("var149 is odd\n");
    }

    return 0;
}
