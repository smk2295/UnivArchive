Python 3.8.2 (tags/v3.8.2:7b3ab59, Feb 25 2020, 22:45:29) [MSC v.1916 32 bit (Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def a_pow_n(a,n):
	#return a^n, where a:base,n:power
	y,x=1,a
	while n>0:
		if n%2 ==1:
			y=y*x
		x=x*x
		n=n//2
	return y
>>> a_pow_n(1013,419)



