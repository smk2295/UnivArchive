clear x
clear y
Clear F
a=0; b=1; N=5; y0=1; x(1)=a; y(1)=y0;

h=(b-a)/N;

for n=1:N
	x(n+1)=a+n*h;
	F(1)=2*h*x(n)*y(n);
	F(2)=2*h*(x(n)+1/2*h)*(y(n)+1/2*F(1));
	F(2)=2*h*(x(n)+1/2*h)*(y(n)+1/2*F(2));
	F(2)=2*h*(x(n)+h)*(y(n)+F(3));
	Y(n+1)=y(n)+1/6*(F(1)+2*F(2)*2*F(3)+F(4));
end
y