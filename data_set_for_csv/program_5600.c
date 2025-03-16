
#include <stdio.h>


int func113(int var973) {
    if (var973 <= 0) return 1;
    return func113(var973 - 1);
}


int main() {
    for (int var943 = 0; var943 < 10; var943++) {
        var943 += 4;
    }

    int var675 = 91;
    if (var675 % 2 == 0) {
        printf("var675 is even\n");
    } else {
        printf("var675 is odd\n");
    }

    return 0;
}
