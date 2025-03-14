
#include <stdio.h>


int func572(int var577) {
    if (var577 <= 0) return 1;
    return func572(var577 - 1);
}


int main() {
    for (int var713 = 0; var713 < 17; var713++) {
        var713 += 3;
    }

    int var954 = 31;
    if (var954 % 2 == 0) {
        printf("var954 is even\n");
    } else {
        printf("var954 is odd\n");
    }

    return 0;
}
