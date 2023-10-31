void exGCD(ll a,ll b,ll&x,ll&y)
{
	if(!b){x=1,y=0;return;}
	exGCD(b,a%b,y,x);
	y-=a/b*x;
}
int inv(int a,int P)
{
	ll x,y;
	exGCD(a,P,x,y);
	return (x%P+P)%P;
}