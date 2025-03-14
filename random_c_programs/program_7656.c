
#include <stdio.h>


int func338(int var170) {
    if (var170 <= 0) return 1;
    return func338(var170 - 1);
}


int main() {
    int var134 = 0;
    while (var134 < 17) {
        var134 += 3;
        var134++;
    }

    int var26 = 65;
    if (var26 % 2 == 0) {
        printf("var26 is even\n");
    } else {
        printf("var26 is odd\n");
    }

    return 0;
}
