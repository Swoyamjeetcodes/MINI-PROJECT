
#include <stdio.h>


int func336(int var740) {
    if (var740 <= 0) return 1;
    return func336(var740 - 1);
}


int main() {
    int var823 = 0;
    while (var823 < 9) {
        var823 += 1;
        var823++;
    }

    int var165 = 26;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    return 0;
}
