
#include <stdio.h>


int func119(int var889) {
    if (var889 <= 0) return 1;
    return func119(var889 - 1);
}


int main() {
    int var859 = 0;
    while (var859 < 12) {
        var859 += 4;
        var859++;
    }

    int var633 = 14;
    if (var633 % 2 == 0) {
        printf("var633 is even\n");
    } else {
        printf("var633 is odd\n");
    }

    return 0;
}
