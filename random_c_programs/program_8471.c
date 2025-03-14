
#include <stdio.h>


int func345(int var175) {
    if (var175 <= 0) return 1;
    return func345(var175 - 1);
}


int main() {
    int var269 = 0;
    while (var269 < 15) {
        var269 += 5;
        var269++;
    }

    int var971 = 5;
    if (var971 % 2 == 0) {
        printf("var971 is even\n");
    } else {
        printf("var971 is odd\n");
    }

    return 0;
}
