
#include <stdio.h>


int func618(int var846) {
    if (var846 <= 0) return 1;
    return func618(var846 - 1);
}


int main() {
    for (int var14 = 0; var14 < 18; var14++) {
        var14 += 2;
    }

    int var722 = 94;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}
