
#include <stdio.h>


int func100(int var584) {
    if (var584 <= 0) return 1;
    return func100(var584 - 1);
}


int main() {
    int var594 = 0;
    while (var594 < 17) {
        var594 += 3;
        var594++;
    }

    int var76 = 12;
    if (var76 % 2 == 0) {
        printf("var76 is even\n");
    } else {
        printf("var76 is odd\n");
    }

    return 0;
}
