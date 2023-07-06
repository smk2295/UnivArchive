clear x
clear y
clear k1 k2 k3 k4
a=0; b=2; N=20; y0=1; x(1)=a; y(1)=y0;

h=(b-a)/N;

for n=1:N
	x(n+1)=a+n*h;
	k1=-h*y(n)^2;
	k2=-h*(y(n)+1/2*k1)^2;
	k3=-h*(y(n)+1/2*k2)^2;
	k4=-h*(y(n)+k3)^2;
	y(n+1)=y(n)+1/6*(k1+2*k2+2*k3+k4);
    fprintf('%f %f %f %f %f %f\n',k1, k2, k3, k4, y(n),y(n+1));
end
