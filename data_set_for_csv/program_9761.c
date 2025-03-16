
#include <stdio.h>


int func810(int var556) {
    if (var556 <= 0) return 1;
    return func810(var556 - 1);
}


int main() {
    int var238 = 0;
    while (var238 < 10) {
        var238 += 1;
        var238++;
    }

    int var807 = 24;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    return 0;
}
