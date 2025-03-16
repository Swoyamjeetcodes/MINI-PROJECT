
#include <stdio.h>


int func185(int var663) {
    if (var663 <= 0) return 1;
    return func185(var663 - 1);
}


int main() {
    int var906 = 0;
    while (var906 < 9) {
        var906 += 5;
        var906++;
    }

    int var306 = 25;
    if (var306 % 2 == 0) {
        printf("var306 is even\n");
    } else {
        printf("var306 is odd\n");
    }

    return 0;
}
