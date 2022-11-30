#include <stdio.h>

int main() {
	int Maxrpm = 3000;
	float period1, period2;
	int inputRpm, inputPulse;
	float rpm, pulse;

	printf("rpm 입력 : ");
	scanf_s("%d", &inputRpm);
	printf("%d\n", inputRpm);

	inputRpm = inputRpm > 3000 ? 3000 : inputRpm;	// max 3000 

	printf("pulse 입력 : ");
	scanf_s("%d", &inputPulse);
	printf("%d\n", inputPulse);

	rpm = inputRpm;
	pulse = inputPulse;

	period1 = ((rpm / 60) * pulse) ;	//frequency
	period2 = 1 / period1 * 1000; // period  millisec

	printf("%0.3f rpm 과 한바퀴 %0.3f pulse의 주기는  %0.3f ms입니다.", rpm, pulse, period2);

	return 0;
}