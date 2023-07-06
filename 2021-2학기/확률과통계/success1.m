
clear all;

N=10000; % 샘플의 개수 (100개, 1000개, 10000개로 변경)

m=1;  % 평균

v=2;  % 분산

X = sqrt(v)*randn(1,N)+m;  % 평균이 m이고 분산이 v인 랜덤변수

h = histogram(X);  % 랜덤변수의 히스토그램
p = histcounts(X,'Normalization','pdf');  % 랜덤변수 히스토그램의 도수값

% plot 하기
binCenters = h.BinEdges + (h.BinWidth/2);
plot(binCenters(1:end-1), p, 'r-');
hold on

% plot probability distribution

xx=-5:0.01:7;

pdf = 1/sqrt(2*pi*v)*exp(-(xx-m).^2/(2*v));

plot(xx,pdf,'b')

% 랜덤변수의 평균값 계산
mean (X)

% 랜덤변수의 분산값 계산
var(X)
