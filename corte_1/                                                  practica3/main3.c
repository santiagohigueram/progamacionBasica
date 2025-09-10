main()
 {
 float fahr, celsius;
 float lower, upper, step;
 lower = 0; 
 upper = 300;
 step = 10;
 fahr = lower;
 while (fahr <= upper) {
 celsius = (5.0/9.0) * (fahr-32.0);
 printf("%3.2f %6.2f\n", fahr, celsius);
 fahr = fahr + step;
 }
 }
