
#include <stdio.h>


int func756(int var836) {
    if (var836 <= 0) return 1;
    return func756(var836 - 1);
}


int main() {
    for (int var312 = 0; var312 < 12; var312++) {
        var312 += 5;
    }

    int var354 = 3;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    return 0;
}
