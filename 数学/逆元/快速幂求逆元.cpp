int pow(int a,int b,int P)
{
	int ans=1;
	while(b)
	{
		if(b&1)ans=1ll*ans*a%P;
		a=1ll*a*a%P;
		b>>=1;
	}
	return ans;
}
int inv(int a,int P){return pow(a,P-2,P);}