
#include <stdio.h>


int func927(int var808) {
    if (var808 <= 0) return 1;
    return func927(var808 - 1);
}


int main() {
    int var322 = 0;
    while (var322 < 11) {
        var322 += 4;
        var322++;
    }

    int var412 = 58;
    if (var412 % 2 == 0) {
        printf("var412 is even\n");
    } else {
        printf("var412 is odd\n");
    }

    return 0;
}
