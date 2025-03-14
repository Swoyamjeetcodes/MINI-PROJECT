
#include <stdio.h>


int func634(int var870) {
    if (var870 <= 0) return 1;
    return func634(var870 - 1);
}


int main() {
    int var769 = 0;
    while (var769 < 19) {
        var769 += 2;
        var769++;
    }

    int var1000 = 17;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
