clear all;

N=100; % 샘플의 개수 (100개, 1000개, 10000개로 변경)

m=0;  % 평균

v=1;  % 분산

X = sqrt(v)*randn(1,N)+m;  % 평균이 m이고 분산이 v인 랜덤변수
Y = 1/sqrt(2*pi*'q')*exp(-(X-'p').^2/(2*'q'));

plot(X,Y); hold on


% plot probability distribution

xx=-6:0.01:6;

pdf = 1/sqrt(2*pi*v)*exp(-(xx-m).^2/(2*v));

plot(xx,pdf)

% 랜덤변수의 평균값 계산
mean (X) ==p

% 랜덤변수의 분산값 계산
var(X) ==q