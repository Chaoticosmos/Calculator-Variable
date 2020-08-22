#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {

	while(true) {

		int num;

		printf("\n   ~ Calculator Program ~ \n\n 계산할 유형을 선택해주세요.");
		printf("\n\n\n");
		printf("1.사칙연산 (범위 = 소수 2자리) \n");
		printf("2.거듭제곱 \n");
		printf("3.제곱근 \n");
		printf("4.미지수가 1개인 일차방정식 (해 소수점 2자리까지 표기함)\n");
		printf("5.미지수가 1개인 이차방정식 (해 소수점 2자리까지 표기함)\n");
		printf("6.미지수가 2개인 연립일차방정식 (해 소수점 2자리까지 표기함)");
		printf("\n");
		printf("0을 입력시 종료합니다.")
		printf("\n\n\n");
		printf(" 번호 : ");

		scanf("%d", &num);

		printf("\n\n");

		if(num == 0) {
			printf("계산기를 종료합니다...");
			break;
		} else {
			calc(num);
		}
	}
	
}

void calc(int num) {

	
	char fourstring;
	double pownum1, pownum2, sqrtnum, plusnum1, plusnum2, minusnum1, minusnum2, multyplynum1, multyplynum2, divisionnum1, divisionnum2,
			numa, numb, numc, numx, numxp = 0, numap = 0, numbp = 0, equationsnum1 = 0, equationsnum2 = 0, equationsnum3 = 0, equationsnum4 = 0, equationsnum5 = 0, equationsnum6 = 0,
			equationsnumx = 0, equationsnumy = 0, equationsprog1 = 0, equationsprog2 = 0, equationsprog3 = 0, equationsprog4 = 0;

	switch (num) {
		case 1:

			printf("사칙연산의 유형을 선택해주세요.\n\n +, -, * (곱하기), / (나누기) \n\n\n 유형 : ");
			scanf(" %c", &fourstring);

			if (fourstring == '+') {
				printf("\n더하기를 할 숫자 2개를 적어주세요. ");
				scanf("%lf %lf", &plusnum1, &plusnum2);
				printf("\n%.2lf + %.2lf = %.2lf 입니다. \n\n", plusnum1, plusnum2, plusnum1 + plusnum2);
			}
			else if (fourstring == '-') {
				printf("\n빼기를 할 숫자 2개를 적어주세요. ");
				scanf("%lf %lf", &minusnum1, &minusnum2);
				printf("\n%.2lf - %.2lf = %.2lf 입니다. \n\n", minusnum1, minusnum2, minusnum1 - minusnum2);
			}
			else if (fourstring == '*') {
				printf("\n곱하기를 할 숫자 2개를 적어주세요. ");
				scanf("%lf %lf", &multyplynum1, &multyplynum2);
				printf("\n%.2lf × %.2lf = %.2lf 입니다. \n\n", multyplynum1, multyplynum2, multyplynum1 * multyplynum2);
			}
			else if (fourstring == '/') {
				printf("\n나누기를 할 숫자 2개를 적어주세요. ");
				scanf("%lf %lf", &divisionnum1, &divisionnum2);
				printf("\n%.2lf ÷ %.2lf = %.2lf 입니다. \n\n", divisionnum1, divisionnum2, divisionnum1 / divisionnum2);
			}
			else {
				printf("\ndefault string\n");
			}
			break;

		case 2:

			printf("\n거듭제곱을 할 숫자 2개(자연수, 두자리수까지)를 순서대로 적어주세요. ");
			scanf("%lf %lf", &pownum1, &pownum2);
			printf("\n%.0lf의 %.0lf제곱은 %.0lf입니다.\n\n", pownum1, pownum2, pow(pownum1, pownum2));
			break;

		case 3:

			printf("\n제곱근을 구하고 싶은 수(자연수)를 입력해주세요. ");
			scanf("%lf", &sqrtnum);
			printf("\n제곱근 %.0lf 는 %.0lf 입니다.\n\n", sqrtnum, sqrt(sqrtnum));
			break;

		case 4:

			printf("\nax + b = 0 에서 대입할 a, b (자연수) 를 입력해주세요. ");
			scanf("%lf %lf", &numa, &numb);

			if(numa == 0) {
				printf("\n%.0lf = 0 의 해(x의 값)는 존재 할 수 없습니다.", numb);
				break;
			}

			numx = (numb / -numa);

			if (numb > 0) {
				printf("\n미지수가 한개인 일차방정식 %.0lfx + %.0lf = 0 의 해(x의 값)는 %.2lf 입니다.", numa, numb, numx);
			}
			else if (numb < 0) {
				printf("\n미지수가 한개인 일차방정식 %.0lfx - %.0lf = 0 의 해(x의 값)는 %.2lf 입니다.", numa, numb * -1, numx);
			}
			else if (numbp == 0) {
				printf("\n미지수가 한개인 일차방정식 %.0lfx = 0 의 해(x의 값)는 0 입니다.", numa);
			}
			break;

		case 5:

			printf("\nax²+ bx + c = 0 에서 대입할 a, b, c (정수) 를 입력해주세요. ");
			scanf("%lf %lf %lf", &numap, &numbp, &numc);

			numxp = (-1 * (numbp / (2 * numap))) - sqrt((pow(numbp, 2) - (4 * numap * numc)) / (4 * numap * numc));

			
				printf("\n미지수가 한개인 이차방정식 %.0lfx²+ %.0lfx + %.0lf = 0 의 해(x의 값)는 ±%.2lf 입니다.", numap, numbp, numc, -1 * numxp);
			
			break;

		case 6:

			printf(" ax + by = c \n\n dx + ey = f\n\n 에 대입할 a, b, c, d , e, f (정수) 를 순서대로 입력해주세요.(a≠d or b≠e)");
			scanf("%lf %lf %lf %lf %lf %lf", &equationsnum1, &equationsnum2, &equationsnum3, &equationsnum4, &equationsnum5, &equationsnum6);

			equationsprog1 = { (equationsnum5 * equationsnum3) - (equationsnum2 * equationsnum6) };

			equationsprog2 = { (equationsnum5 * equationsnum1) - (equationsnum2 * equationsnum4) };

			equationsnumx = equationsprog1 / equationsprog2;

			equationsprog3 = { (equationsnum3 * equationsnum4) - (equationsnum1 * equationsnum6) };

			equationsprog4 = { (equationsnum2 * equationsnum4) - (equationsnum1 * equationsnum5) };

			equationsnumy = equationsprog3 / equationsprog4;

			printf("\n %.0lfx + %.0lfy = %.0lf \n %.0lfx + %.0lfy = %.0lf 의 해 : x = %.2lf, y = %.2lf\n",equationsnum1, equationsnum2, equationsnum3, equationsnum4, equationsnum5, equationsnum6 , equationsnumx, equationsnumy);

			break;

		default:

			printf("%d번은 없는 기능입니다.")

	}
	
}
