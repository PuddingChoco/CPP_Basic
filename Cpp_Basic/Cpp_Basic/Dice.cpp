void Dice(int a, int b, int c, int d)
{   // 1번째 
	if(a == b && b == c && c == d){} // 여기는 a==c 필요 없음. 같은거 비교할떄는 괜찮지만,

	// 2번째
	if (a == b && b == c && c != d){}

	if(b == c && c == d && d != a){}

	if(c == d && d == a && a != b){}

	if(d == a && a == b && b != c){}

	// 5번째 
	if (a != b && b != c && c != d && a != c && b != d && a != d) {} //다른거 비교할때는 다 비교 해줘야함.
	// 등등...
}