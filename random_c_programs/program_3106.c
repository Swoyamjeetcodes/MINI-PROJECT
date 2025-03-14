
#include <stdio.h>


int func842(int var958) {
    if (var958 <= 0) return 1;
    return func842(var958 - 1);
}


int main() {
    for (int var440 = 0; var440 < 13; var440++) {
        var440 += 5;
    }

    int var949 = 73;
    if (var949 % 2 == 0) {
        printf("var949 is even\n");
    } else {
        printf("var949 is odd\n");
    }

    return 0;
}
