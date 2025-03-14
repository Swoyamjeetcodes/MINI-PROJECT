
#include <stdio.h>


int func195(int var772) {
    if (var772 <= 0) return 1;
    return func195(var772 - 1);
}


int main() {
    int var263 = 0;
    while (var263 < 10) {
        var263 += 5;
        var263++;
    }

    int var785 = 18;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    return 0;
}
