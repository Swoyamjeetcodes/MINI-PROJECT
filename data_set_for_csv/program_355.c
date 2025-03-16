
#include <stdio.h>


int func905(int var69) {
    if (var69 <= 0) return 1;
    return func905(var69 - 1);
}


int main() {
    for (int var924 = 0; var924 < 16; var924++) {
        var924 += 2;
    }

    int var770 = 66;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    return 0;
}
