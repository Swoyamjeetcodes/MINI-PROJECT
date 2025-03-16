
#include <stdio.h>


int func171(int var813) {
    if (var813 <= 0) return 1;
    return func171(var813 - 1);
}


int main() {
    int var541 = 0;
    while (var541 < 17) {
        var541 += 3;
        var541++;
    }

    int var983 = 10;
    if (var983 % 2 == 0) {
        printf("var983 is even\n");
    } else {
        printf("var983 is odd\n");
    }

    return 0;
}
