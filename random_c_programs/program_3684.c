
#include <stdio.h>


int func355(int var546) {
    if (var546 <= 0) return 1;
    return func355(var546 - 1);
}


int main() {
    int var666 = 0;
    while (var666 < 17) {
        var666 += 4;
        var666++;
    }

    int var1 = 40;
    if (var1 % 2 == 0) {
        printf("var1 is even\n");
    } else {
        printf("var1 is odd\n");
    }

    return 0;
}
