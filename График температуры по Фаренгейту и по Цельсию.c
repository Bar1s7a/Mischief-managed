#include <stdio.h>

/* вывод таблицы температур по ‘аренгейту и ÷ельсию
    дл€ fahr = 0, 20, ..., 300;
    верси€ с вещественной арифметикой */
main(){
    printf("Temperature chart Fahrenheit and Celsius\n");

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;     /* нижн€€ граница температур в таблице */
    upper = 300;  /* верхн€€ граница */
    step = 20;    /* величина шага */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;

     }
}
