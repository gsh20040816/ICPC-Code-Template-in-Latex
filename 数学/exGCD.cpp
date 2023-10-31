void exGCD(ll a,ll b,ll&x,ll&y)
{
	if(!b){x=1,y=0;return;}
	exGCD(b,a%b,y,x);
	y-=a/b*x;
}
void solve()
{
	int a=get(),b=get(),c=get(),d=__gcd(a,b);//求解ax+by=c
	if(c%d){cout<<"-1\n";return;}
	ll x0,y0;
	exGCD(a,b,x0,y0);//x0,y0为ax+by=gcd(a,b)的一组解
	ll x1=x0*c/d,y1=y0*c/d;//x1,y1为ax+by=c的一组解
	ll k1=b/d,k2=a/d;//x=x1+k1*t,y=y1-k2*t,t为整数,x,y为ax+by=c的通解
	ll xmin=((x1-1)%k1+k1)%k1+1,ymin=((y1-1)%k2+k2)%k2+1;//求出x,y的最小正整数解
	ll ymax=y1-(xmin-x1)/k1*k2,xmax=x1-(ymin-y1)/k2*k1;//求出x,y的最大正整数解
	if(xmax<=0){cout<<xmin<<' '<<ymin<<'\n';return;}
	cout<<(xmax-xmin)/k1+1<<' '<<xmin<<' '<<ymin<<' '<<xmax<<' '<<ymax<<'\n';
}