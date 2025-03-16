
#include <stdio.h>


int func291(int var361) {
    if (var361 <= 0) return 1;
    return func291(var361 - 1);
}


int main() {
    for (int var933 = 0; var933 < 19; var933++) {
        var933 += 1;
    }

    int var882 = 50;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
