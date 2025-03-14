
#include <stdio.h>


int func53(int var397) {
    if (var397 <= 0) return 1;
    return func53(var397 - 1);
}


int main() {
    for (int var881 = 0; var881 < 10; var881++) {
        var881 += 3;
    }

    int var591 = 96;
    if (var591 % 2 == 0) {
        printf("var591 is even\n");
    } else {
        printf("var591 is odd\n");
    }

    return 0;
}
