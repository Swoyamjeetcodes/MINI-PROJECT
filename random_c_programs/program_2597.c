
#include <stdio.h>


int func411(int var986) {
    if (var986 <= 0) return 1;
    return func411(var986 - 1);
}


int main() {
    int var950 = 0;
    while (var950 < 6) {
        var950 += 3;
        var950++;
    }

    int var797 = 78;
    if (var797 % 2 == 0) {
        printf("var797 is even\n");
    } else {
        printf("var797 is odd\n");
    }

    return 0;
}
