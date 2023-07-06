clear all;

mu = 0;  
sg = 1;  
n_samples = 100; 

i =randn(n_samples,1)

x=linspace(mu-4*sg,mu+4*sg,n_samples);
pdfx=1/sqrt(2*pi)/sg*exp(-(x-mu).^2/(2*sg^2));
plot(x,pdfx);

%calculate sample mean
m = mean(i)

%calculate sample variance
v= var(i,1)