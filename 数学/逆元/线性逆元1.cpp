int n,P,fc[N],inv0[N],inv[N];
void init()
{
	fc[0]=1;
	For(i,1,n)fc[i]=1ll*fc[i-1]*i%P;
	inv0[n]=pow(fc[n],P-2,P);
	FOR(i,n-1,1)inv0[i]=1ll*inv0[i+1]*(i+1)%P;
	For(i,1,n)inv[i]=1ll*inv0[i]*fc[i-1]%P;
}