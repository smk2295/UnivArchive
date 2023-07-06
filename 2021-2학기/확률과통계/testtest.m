N = 3000;

std = 2; % 표준편차

std_normal=sqrt(-2*log(rand(N))).*cos(2*pi*rand(N)); % 평균이 0 이고 분산이 1인 Gaussian Sample

NormalSample=std*std_normal; % 표준편차가 2인 Gaussian Sample

[pdf,X]= hist(NormalSample(:), 500); % hist 함수를 이용하여 구간별로 쌓아준다

resol=X(2)-X(1); % resolution을 계산한다.

pdf= pdf/(N^2.*resol); % Normalization 해 준다.

figure(2), bar(X,pdf), grid on, title('Gaussian PDF') % 그래프를 그린다.