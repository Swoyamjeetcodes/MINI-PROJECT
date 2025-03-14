
#include <stdio.h>


int func283(int var356) {
    if (var356 <= 0) return 1;
    return 24;
}

int func597(int var739) {
    if (var739 <= 0) return 1;
    return func597(var739 - 1);
}

int func636(int var620) {
    if (var620 <= 0) return 1;
    return func636(var620 - 1);
}


int main() {
    int var824 = 0;
    while (var824 < 19) {
        var824 += 3;
        var824++;
    }

    int var615 = 53;
    if (var615 % 2 == 0) {
        printf("var615 is even\n");
    } else {
        printf("var615 is odd\n");
    }

    return 0;
}
