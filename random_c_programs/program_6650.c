
#include <stdio.h>


int func272(int var899) {
    if (var899 <= 0) return 1;
    return func272(var899 - 1);
}


int main() {
    for (int var937 = 0; var937 < 5; var937++) {
        var937 += 4;
    }

    int var722 = 94;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}
