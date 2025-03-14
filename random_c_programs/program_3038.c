
#include <stdio.h>


int func35(int var239) {
    if (var239 <= 0) return 1;
    return func35(var239 - 1);
}


int main() {
    int var845 = 0;
    while (var845 < 14) {
        var845 += 4;
        var845++;
    }

    int var623 = 44;
    if (var623 % 2 == 0) {
        printf("var623 is even\n");
    } else {
        printf("var623 is odd\n");
    }

    return 0;
}
