x = 1*randn(10000,1) + 0;
histogram(x,'Normalization','pdf','r')

hold on
y = -5:0.1:5;
mu = 0;
sigma = 1;
f = exp(-(y-mu).^2./(2*sigma^2))./(sigma*sqrt(2*pi));
plot(y,f,'LineWidth',1.5,'b')