/*Experiment 3.3
 WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).*/
 #include<stdio.h>
 int main()
 {
 	double w,h,bmi;
 	printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");  
 	printf("enter the weight of person in kgs \n");
 	scanf("%lf",&w);
 	printf("enter the height of person in meters \n");
 	scanf("%lf",&h);
 	bmi=w/(h*h);
 	if (bmi<15)
 	 {
 	 	printf("starvation");
	 }
	 else if (bmi>15 && bmi<=17.5)
	 {
	 	printf("anorexic");
	 }
	 else if(bmi>17.5 && bmi<=18.5)
	 {
	 	printf("underweight");
	 }
	 else if(bmi>18.5 && bmi<=24.9)
	 {
	 	printf("ideal");
	 }
	 else if(bmi>24.9 && bmi<=25.9)
	 {
	 	printf("overweight");
	 }
	 else if(bmi>25.9 && bmi<=39.9)
	 {
	 	printf("obese");
	 }
	 else if(bmi>39.9)
	 {
	 	printf("morbidly obese");
	 }
 	printf(" BMI of person is %lf",bmi);
 	return 0;
 }
