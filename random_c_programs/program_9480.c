
#include <stdio.h>


int func142(int var163) {
    if (var163 <= 0) return 1;
    return func142(var163 - 1);
}


int main() {
    int var401 = 0;
    while (var401 < 7) {
        var401 += 4;
        var401++;
    }

    int var674 = 3;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
