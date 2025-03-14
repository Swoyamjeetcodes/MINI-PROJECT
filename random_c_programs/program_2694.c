
#include <stdio.h>


int func897(int var756) {
    if (var756 <= 0) return 1;
    return func897(var756 - 1);
}


int main() {
    int var823 = 0;
    while (var823 < 20) {
        var823 += 5;
        var823++;
    }

    int var922 = 36;
    if (var922 % 2 == 0) {
        printf("var922 is even\n");
    } else {
        printf("var922 is odd\n");
    }

    return 0;
}
