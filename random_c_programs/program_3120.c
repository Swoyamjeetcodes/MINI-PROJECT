
#include <stdio.h>


int func520(int var926) {
    if (var926 <= 0) return 1;
    return func520(var926 - 1);
}


int main() {
    int var883 = 0;
    while (var883 < 16) {
        var883 += 2;
        var883++;
    }

    int var349 = 41;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
