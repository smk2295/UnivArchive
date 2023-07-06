N = 1000;
x = [-20:1:20];
samples = 2 + sqrt(4)*randn(N, 1);
ySamples = histc(samples,x) / N;
yTheoretical = pdf('norm', x, 2, sqrt(4)); %put std_deviation not variance
plot(x, yTheoretical, x, ySamples)