clc, clear, close all
 
x = -5:0.01:5;
mu = 0;
sigma = 1;
 
gaussian_pdf = (1/sqrt(2*pi*sigma^2))*exp(-0.5.*((x-mu)/sigma).^2);

sample=randn(10,1)
y = -5:0.01:5;

plot(x, gaussian_pdf,y,sample)