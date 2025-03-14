
#include <stdio.h>


int func73(int var908) {
    if (var908 <= 0) return 1;
    return func73(var908 - 1);
}


int main() {
    int var836 = 0;
    while (var836 < 13) {
        var836 += 1;
        var836++;
    }

    int var242 = 90;
    if (var242 % 2 == 0) {
        printf("var242 is even\n");
    } else {
        printf("var242 is odd\n");
    }

    return 0;
}
