
#include <stdio.h>


int func101(int var984) {
    if (var984 <= 0) return 1;
    return func101(var984 - 1);
}


int main() {
    int var717 = 0;
    while (var717 < 18) {
        var717 += 5;
        var717++;
    }

    int var129 = 73;
    if (var129 % 2 == 0) {
        printf("var129 is even\n");
    } else {
        printf("var129 is odd\n");
    }

    return 0;
}
