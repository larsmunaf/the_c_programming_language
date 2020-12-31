
/* Exercise 1-1 is trivial */

/* Exercise 1-2 is trivial */

/* Exercise 1-3 */
#ifdef EXERCISE_1_3
    #include <stdio.h>

    int print_fahr_to_celsius_table() {
        float fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;
        printf("Fahrenheit Celsius\n");
        while(fahr <= upper) {
            celsius = (5.0 / 9.0) * (fahr - 32.0);
            printf("%3.0f %6.1f\n", fahr, celsius);
            fahr = fahr + step;
        }

        return 0;
    }
#endif /* EXERCISE_1_3 */

#ifdef EXERCISE_1_4
    #include <stdio.h>

    int print_celsius_to_fahr_table() {
        float fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        celsius = lower;
        printf("Celsius Fahrenheit\n");
        while(celsius <= upper) {
            fahr = (9.0 / 5.0) * celsius + 32.0;
            printf("%3.0f %6.1f\n", celsius, fahr);
            celsius = celsius + step;
        }

        return 0;
    }
#endif /* EXERCISE_1_4 */

#ifdef EXERCISE_1_5
    #include <stdio.h>
    int print_temp_table_reverse()
    {
        int fahr;

        for (fahr = 300; fahr >= 0; fahr = fahr - 20)
            printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr -32));
    }
#endif /* EXERCISE_1_5 */

int main(int argc, char **argv)
{
    #ifdef EXERCISE_1_3
        print_fahr_to_celsius_table();
    #endif /* EXERCISE_1_3 */

    #ifdef EXERCISE_1_4
        print_celsius_to_fahr_table();
    #endif /* EXERCISE_1_4 */

    #ifdef EXERCISE_1_5
        print_temp_table_reverse();
    #endif /* EXERCISE_1_5 */
}