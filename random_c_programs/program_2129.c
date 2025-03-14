
#include <stdio.h>


int func261(int var814) {
    if (var814 <= 0) return 1;
    return func261(var814 - 1);
}


int main() {
    int var367 = 0;
    while (var367 < 16) {
        var367 += 1;
        var367++;
    }

    int var786 = 68;
    if (var786 % 2 == 0) {
        printf("var786 is even\n");
    } else {
        printf("var786 is odd\n");
    }

    return 0;
}
