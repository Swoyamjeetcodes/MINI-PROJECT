
#include <stdio.h>


int func261(int var62) {
    if (var62 <= 0) return 1;
    return func261(var62 - 1);
}


int main() {
    int var930 = 0;
    while (var930 < 18) {
        var930 += 2;
        var930++;
    }

    int var144 = 49;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    return 0;
}
