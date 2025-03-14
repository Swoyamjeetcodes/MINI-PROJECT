
#include <stdio.h>


int func31(int var227) {
    if (var227 <= 0) return 1;
    return func31(var227 - 1);
}


int main() {
    int var339 = 0;
    while (var339 < 17) {
        var339 += 1;
        var339++;
    }

    int var267 = 7;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    return 0;
}
