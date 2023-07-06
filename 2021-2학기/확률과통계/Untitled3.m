N = 10000;
x = [-10:10];
samples = 0 + sqrt(1)*randn(N, 1);
ySamples = histc(samples,x) / N;
yTheoretical = pdf('norm', x, 0, 1);
plot(x, yTheoretical, x, ySamples)