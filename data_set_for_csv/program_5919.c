
#include <stdio.h>


int func617(int var922) {
    if (var922 <= 0) return 1;
    return func617(var922 - 1);
}


int main() {
    for (int var879 = 0; var879 < 14; var879++) {
        var879 += 5;
    }

    int var952 = 11;
    if (var952 % 2 == 0) {
        printf("var952 is even\n");
    } else {
        printf("var952 is odd\n");
    }

    return 0;
}
