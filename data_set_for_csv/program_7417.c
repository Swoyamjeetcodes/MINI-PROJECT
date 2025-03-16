
#include <stdio.h>


int func976(int var869) {
    if (var869 <= 0) return 1;
    return func976(var869 - 1);
}


int main() {
    for (int var385 = 0; var385 < 16; var385++) {
        var385 += 5;
    }

    int var599 = 37;
    if (var599 % 2 == 0) {
        printf("var599 is even\n");
    } else {
        printf("var599 is odd\n");
    }

    return 0;
}
