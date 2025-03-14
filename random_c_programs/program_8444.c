
#include <stdio.h>


int func116(int var29) {
    if (var29 <= 0) return 1;
    return func116(var29 - 1);
}


int main() {
    int var894 = 0;
    while (var894 < 6) {
        var894 += 3;
        var894++;
    }    int var950 = 0;
    while (var950 < 5) {
        var950 += 3;
        var950++;
    }

    int var865 = 33;
    if (var865 % 2 == 0) {
        printf("var865 is even\n");
    } else {
        printf("var865 is odd\n");
    }

    int var657 = 2;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
