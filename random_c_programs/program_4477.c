
#include <stdio.h>


int func653(int var322) {
    if (var322 <= 0) return 1;
    return func653(var322 - 1);
}

int func567(int var671) {
    if (var671 <= 0) return 1;
    return func567(var671 - 1);
}


int main() {
    int var837 = 0;
    while (var837 < 9) {
        var837 += 2;
        var837++;
    }

    int var803 = 67;
    if (var803 % 2 == 0) {
        printf("var803 is even\n");
    } else {
        printf("var803 is odd\n");
    }

    return 0;
}
