
#include <stdio.h>


int func480(int var37) {
    if (var37 <= 0) return 1;
    return func480(var37 - 1);
}


int main() {
    for (int var648 = 0; var648 < 7; var648++) {
        var648 += 3;
    }

    int var761 = 77;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    return 0;
}
