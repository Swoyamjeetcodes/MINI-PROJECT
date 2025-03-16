
#include <stdio.h>


int func361(int var303) {
    if (var303 <= 0) return 1;
    return func361(var303 - 1);
}

int func911(int var862) {
    if (var862 <= 0) return 1;
    return func911(var862 - 1);
}


int main() {
    int var836 = 0;
    while (var836 < 7) {
        var836 += 3;
        var836++;
    }    int var883 = 0;
    while (var883 < 13) {
        var883 += 2;
        var883++;
    }

    int var763 = 56;
    if (var763 % 2 == 0) {
        printf("var763 is even\n");
    } else {
        printf("var763 is odd\n");
    }

    return 0;
}
