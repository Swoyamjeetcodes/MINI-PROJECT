
#include <stdio.h>


int func448(int var293) {
    if (var293 <= 0) return 1;
    return func448(var293 - 1);
}


int main() {
    int var788 = 0;
    while (var788 < 15) {
        var788 += 1;
        var788++;
    }

    int var79 = 9;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    return 0;
}
