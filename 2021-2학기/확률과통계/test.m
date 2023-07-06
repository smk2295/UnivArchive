% Histogram for gaussian random variables

clear all;

i = randn(100,1);

m = mean(i)%i의 평균 값을 구한다.

v= var(i,1)%i의 분산을 구한다.

hist(i)
