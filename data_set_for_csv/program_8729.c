
#include <stdio.h>


int func263(int var416) {
    if (var416 <= 0) return 1;
    return func263(var416 - 1);
}


int main() {
    for (int var198 = 0; var198 < 5; var198++) {
        var198 += 2;
    }

    int var347 = 47;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    return 0;
}
