
#include <stdio.h>


int func508(int var3) {
    if (var3 <= 0) return 1;
    return func508(var3 - 1);
}


int main() {
    int var881 = 0;
    while (var881 < 14) {
        var881 += 3;
        var881++;
    }

    int var858 = 90;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    return 0;
}
