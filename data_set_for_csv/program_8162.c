
#include <stdio.h>


int func447(int var406) {
    if (var406 <= 0) return 1;
    return func447(var406 - 1);
}


int main() {
    int var705 = 0;
    while (var705 < 11) {
        var705 += 3;
        var705++;
    }

    int var310 = 61;
    if (var310 % 2 == 0) {
        printf("var310 is even\n");
    } else {
        printf("var310 is odd\n");
    }

    return 0;
}
