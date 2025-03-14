
#include <stdio.h>


int func741(int var263) {
    if (var263 <= 0) return 1;
    return func741(var263 - 1);
}

int func614(int var316) {
    if (var316 <= 0) return 1;
    return func614(var316 - 1);
}

int func413(int var650) {
    if (var650 <= 0) return 1;
    return func413(var650 - 1);
}

int func414(int var53) {
    if (var53 <= 0) return 1;
    return func414(var53 - 1);
}


int main() {
    for (int var678 = 0; var678 < 10; var678++) {
        var678 += 1;
    }    int var242 = 0;
    while (var242 < 10) {
        var242 += 3;
        var242++;
    }

    int var746 = 13;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    return 0;
}
