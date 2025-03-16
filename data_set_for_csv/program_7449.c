
#include <stdio.h>


int func67(int var285) {
    if (var285 <= 0) return 1;
    return func67(var285 - 1);
}


int main() {
    int var156 = 0;
    while (var156 < 18) {
        var156 += 3;
        var156++;
    }

    int var807 = 78;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    return 0;
}
