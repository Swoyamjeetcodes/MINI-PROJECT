
#include <stdio.h>


int func685(int var193) {
    if (var193 <= 0) return 1;
    return func685(var193 - 1);
}


int main() {
    int var186 = 0;
    while (var186 < 5) {
        var186 += 2;
        var186++;
    }

    int var189 = 47;
    if (var189 % 2 == 0) {
        printf("var189 is even\n");
    } else {
        printf("var189 is odd\n");
    }

    return 0;
}
