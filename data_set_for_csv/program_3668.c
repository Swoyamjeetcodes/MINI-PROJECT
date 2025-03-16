
#include <stdio.h>


int func91(int var599) {
    if (var599 <= 0) return 1;
    return func91(var599 - 1);
}


int main() {
    int var293 = 0;
    while (var293 < 5) {
        var293 += 4;
        var293++;
    }

    int var224 = 69;
    if (var224 % 2 == 0) {
        printf("var224 is even\n");
    } else {
        printf("var224 is odd\n");
    }

    return 0;
}
