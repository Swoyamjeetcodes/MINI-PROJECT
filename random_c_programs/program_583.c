
#include <stdio.h>


int func300(int var191) {
    if (var191 <= 0) return 1;
    return func300(var191 - 1);
}


int main() {
    int var165 = 0;
    while (var165 < 15) {
        var165 += 4;
        var165++;
    }

    int var380 = 10;
    if (var380 % 2 == 0) {
        printf("var380 is even\n");
    } else {
        printf("var380 is odd\n");
    }

    return 0;
}
