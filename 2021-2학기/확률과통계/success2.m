clear all;

N=10000; % 샘플의 개수 (100개, 1000개, 10000개로 변경)

m=1;  % 평균

v=2;  % 분산

X = sqrt(v)*randn(1,N)+m;  % 평균이 m이고 분산이 v인 랜덤변수

%랜덤 변수에 대한 
y=-5:0.01:7;
p=mean (X)
q=var(X)
pdf = 1/sqrt(2*pi*q)*exp(-(y-p).^2/(2*q));

plot(y,pdf,'r'); hold on

% plot probability distribution

xx=-5:0.01:7;

realpdf = 1/sqrt(2*pi*v)*exp(-(xx-m).^2/(2*v));

plot(xx,realpdf,'b')

% 랜덤변수의 평균값 계산
mean (X)

% 랜덤변수의 분산값 계산
var(X)