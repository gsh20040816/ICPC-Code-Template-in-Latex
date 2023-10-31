int n,P,a[N],mul[N],inv0[N],inv[N];
void init()
{
	mul[0]=1;
	For(i,1,n)mul[i]=1ll*mul[i-1]*a[i]%P;
	inv0[n]=pow(mul[n],P-2,P);
	FOR(i,n-1,1)inv0[i]=1ll*inv0[i+1]*a[i+1]%P;
	For(i,1,n)inv[i]=1ll*inv0[i]*mul[i-1]%P;
}