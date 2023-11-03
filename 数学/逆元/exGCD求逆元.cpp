int inv(int a,int P)
{
	ll x,y;
	exGCD(a,P,x,y);
	return (x%P+P)%P;
}