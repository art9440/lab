
int main() {
    double result;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = 0; l < 4; l++) {
                    result = 1;

                    if (i == 0)
                        result += 2;
                    else if (i == 1)
                        result -= 2;
                    else if (i == 2)
                        result *= 2;
                    else
                        result /= 2;

                    if (j == 0)
                        result += 3;
                    else if (j == 1)
                        result -= 3;
                    else if (j == 2)
                        result *= 3;
                    else
                        result /= 3;

                    if (k == 0)
                        result+= 4;
                    else if (k == 1)
                        result-= 4;
                    else if (k == 2)
                        result*= 4;
                    else
                        result/= 4;

                    if (l == 0)
                        result+= 5;
                    else if (l == 1)
                        result-= 5;
                    else if (l == 2)
                        result*= 5;
                    else
                        result/= 5;

                    if (result == 35) {
                        printf("%f", result);
                    }
                }
            }
        }
    }
    return 0;
}