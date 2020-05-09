#include "pch.h"
#include "tipsware.h"

// 이 프로그램은 특별한 메세지를 사용하지 않는다.
NOT_USE_MESSAGE

int main(void)
{
	// std 라이브러리의 printf가 아님!!
	printf(20, 5, RGB(0, 0, 255), "Hello world!");
	
	// 정보를 윈도우에 출력한다.
	ShowDisplay(); 

	return 0;
}


