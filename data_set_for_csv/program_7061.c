
#include <stdio.h>


int func345(int var198) {
    if (var198 <= 0) return 1;
    return func345(var198 - 1);
}


int main() {
    int var892 = 0;
    while (var892 < 19) {
        var892 += 5;
        var892++;
    }

    int var648 = 56;
    if (var648 % 2 == 0) {
        printf("var648 is even\n");
    } else {
        printf("var648 is odd\n");
    }

    return 0;
}
