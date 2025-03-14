
#include <stdio.h>


int func125(int var752) {
    if (var752 <= 0) return 1;
    return func125(var752 - 1);
}


int main() {
    int var222 = 0;
    while (var222 < 16) {
        var222 += 1;
        var222++;
    }

    int var210 = 37;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    return 0;
}
