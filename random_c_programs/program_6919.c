
#include <stdio.h>


int func682(int var873) {
    if (var873 <= 0) return 1;
    return func682(var873 - 1);
}


int main() {
    for (int var168 = 0; var168 < 18; var168++) {
        var168 += 1;
    }

    int var668 = 85;
    if (var668 % 2 == 0) {
        printf("var668 is even\n");
    } else {
        printf("var668 is odd\n");
    }

    return 0;
}
