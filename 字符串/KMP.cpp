int n,m,nxt[N];string a,b;
void init()
{
	int j=0;
	For(i,2,m)
	{
		while(j&&b[i]!=b[j+1])j=nxt[j];
		nxt[i]=j+=b[i]==b[j+1];
	}
}
void kmp()
{
	int j=0;
	For(i,1,n)
	{
		while(j&&a[i]!=b[j+1])j=nxt[j];
		j+=a[i]==b[j+1];
		if(j==m){cout<<i-m+1<<'\n';j=nxt[j];}
	}
}
void solve()
{
	cin>>a>>b;
	n=a.length(),m=b.length();
	a=" "+a,b=" "+b;
	init();kmp();
	For(i,1,m)cout<<nxt[i]<<' ';cout<<'\n';
}