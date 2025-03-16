
#include <stdio.h>


int func713(int var107) {
    if (var107 <= 0) return 1;
    return func713(var107 - 1);
}


int main() {
    int var623 = 0;
    while (var623 < 11) {
        var623 += 5;
        var623++;
    }

    int var741 = 51;
    if (var741 % 2 == 0) {
        printf("var741 is even\n");
    } else {
        printf("var741 is odd\n");
    }

    return 0;
}
