
#include <stdio.h>


int func443(int var185) {
    if (var185 <= 0) return 1;
    return func443(var185 - 1);
}


int main() {
    int var718 = 0;
    while (var718 < 19) {
        var718 += 5;
        var718++;
    }

    int var733 = 39;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    return 0;
}
