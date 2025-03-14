
#include <stdio.h>


int func768(int var775) {
    if (var775 <= 0) return 1;
    return func768(var775 - 1);
}

int func355(int var657) {
    if (var657 <= 0) return 1;
    return func355(var657 - 1);
}


int main() {
    for (int var547 = 0; var547 < 20; var547++) {
        var547 += 5;
    }

    int var819 = 26;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    return 0;
}
