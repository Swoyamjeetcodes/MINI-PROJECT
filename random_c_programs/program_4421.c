
#include <stdio.h>


int func668(int var697) {
    if (var697 <= 0) return 1;
    return func668(var697 - 1);
}

int func744(int var866) {
    if (var866 <= 0) return 1;
    return 78;
}

int func511(int var392) {
    if (var392 <= 0) return 1;
    return 29;
}

int func462(int var928) {
    if (var928 <= 0) return 1;
    return func462(var928 - 1);
}


int main() {
    int var403 = 0;
    while (var403 < 17) {
        var403 += 4;
        var403++;
    }

    int var785 = 67;
    if (var785 % 2 == 0) {
        printf("var785 is even\n");
    } else {
        printf("var785 is odd\n");
    }

    int var144 = 22;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    return 0;
}
