
#include <stdio.h>


int func828(int var663) {
    if (var663 <= 0) return 1;
    return func828(var663 - 1);
}


int main() {
    int var869 = 0;
    while (var869 < 10) {
        var869 += 1;
        var869++;
    }

    int var723 = 9;
    if (var723 % 2 == 0) {
        printf("var723 is even\n");
    } else {
        printf("var723 is odd\n");
    }

    return 0;
}
