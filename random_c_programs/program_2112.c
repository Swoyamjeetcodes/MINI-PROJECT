
#include <stdio.h>


int func849(int var340) {
    if (var340 <= 0) return 1;
    return func849(var340 - 1);
}


int main() {
    int var115 = 0;
    while (var115 < 19) {
        var115 += 5;
        var115++;
    }

    int var984 = 53;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    return 0;
}
