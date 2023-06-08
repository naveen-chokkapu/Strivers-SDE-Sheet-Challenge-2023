def modularExponentiation(x, n, m):
	# Write your code here.
	ans = 1
	while n:
		if n&1:
			ans*=x; n-=1;
			ans%=m;
		else:
			x*=x; n//=2;
			x%=m;
			
	return ans%m

# can go for 1<= x,n,m <=10^9
# TC: O(logn)