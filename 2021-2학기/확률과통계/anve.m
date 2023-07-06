
clear all;

N=100000;

m=0;

v=2;

X = sqrt(v)*randn(N,1)+m;

[y,x]=hist(X);

res = x(2)-x(1);

plot(x,y/(N/res))

hold on


%plot probability distribution

xx=-6:0.01:6;

pdf = 1/sqrt(2*pi*v)*exp(-(xx-m).^2/(2*v));

plot(xx,pdf)

%calculate sample mean 
mean (x)

%calculate sample variance
var(x)
