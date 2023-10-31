int n,tot,prm[N/10];bool Not[N];
void init()
{
	Not[0]=Not[1]=1;
	For(i,2,n)
	{
		if(!Not[i])prm[++tot]=i;
		For(j,1,tot)
		{
			if(i*prm[j]>n)break;
			Not[i*prm[j]]=1;
			if(i%prm[j]==0)break;
		}
	}
}