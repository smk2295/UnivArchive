clear all;

%Exact prob
k = [1:0.1:6];
p = erf(k/sqrt(2));
plot(k,p,'b');
hold on;

%Chebyshev lower bound
k = [1:0.1:6];
ch = 1.-(1./(k.^2));
plot(k,ch,'r');