
#include <stdio.h>


int func543(int var38) {
    if (var38 <= 0) return 1;
    return func543(var38 - 1);
}


int main() {
    for (int var891 = 0; var891 < 7; var891++) {
        var891 += 1;
    }

    int var1000 = 30;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
