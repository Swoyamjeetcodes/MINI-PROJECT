
#include <stdio.h>


int func927(int var674) {
    if (var674 <= 0) return 1;
    return func927(var674 - 1);
}

int func531(int var497) {
    if (var497 <= 0) return 1;
    return func531(var497 - 1);
}


int main() {
    int var69 = 0;
    while (var69 < 9) {
        var69 += 3;
        var69++;
    }

    int var771 = 73;
    if (var771 % 2 == 0) {
        printf("var771 is even\n");
    } else {
        printf("var771 is odd\n");
    }

    return 0;
}
